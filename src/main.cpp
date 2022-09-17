#include "./classes/console.h"
#include "./exceptions/invalidinput.h"

int main() {
    Config config = Config {
            .welcome =  "C++ Bare CLI\nVersion 0.2.0",
            .input_ending =  OptionalLineEnding,
            .input_prefix =  "> ",
            .input_end_char =  ";",
    };

    Console console = Console(config);

    console.welcome();

    while (console.running()) {
        std::string input;
        std::cout << "\n" << config.input_prefix << " " << std::flush;
        std::getline(std::cin, input);

        try {
            console.next(input);
        } catch (InvalidInputException e) {
            console.printError("Invalid input: " + e.getMessage());
        }
    }

    return EXIT_SUCCESS;
}
