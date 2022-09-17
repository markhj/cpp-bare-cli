#include "./classes/console.h"
#include "./exceptions/invalidinput.h"

int main() {
    Console console = Console();

    console.welcome();

    while (console.running()) {
        try {
            console.next();
        } catch (InvalidInputException e) {
            console.printError("Invalid input: " + e.getMessage());
        }
    }

    return EXIT_SUCCESS;
}
