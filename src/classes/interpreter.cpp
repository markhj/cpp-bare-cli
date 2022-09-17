#include "interpreter.h"
#include "../exceptions/invalidinput.h"
#include "../impl/impl.h"
#include <iostream>
#include <string>
#include <regex>

void Interpreter::trim(std::string &input, Config *config) {
    std::regex lineEnding = std::regex(config->input_end_char.insert(1, "$"));
    input = std::regex_replace(input, std::regex("(^[ ]*|[ ]*$)"), "");

    switch (config->input_ending) {
        case NoLineEnding:
            break;
        case OptionalLineEnding:
            input = regex_replace(input, lineEnding, "");
            break;
        case RequiredLineEnding:
            if (!std::regex_search(input, lineEnding)) {
                throw InvalidInputException("Missing ;");
            }
            input = regex_replace(input, lineEnding, "");
            break;
    }
}

void Interpreter::interpret(std::string input, Config *config, bool &keepOpen) {
    trim(input, config);

    if (input == "exit") {
        keepOpen = false;
        return;
    }

    Impl::main(input);
}
