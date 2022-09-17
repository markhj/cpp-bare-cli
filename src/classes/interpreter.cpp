#include "interpreter.h"
#include "../config/cli.h"
#include "../exceptions/invalidinput.h"
#include <iostream>
#include <string>
#include <regex>

void Interpreter::trim(std::string &input) {
    std::string expr = INPUT_END_CHAR;
    expr.insert(1,"$");
    std::regex lineEnding = std::regex(expr);

    input = std::regex_replace(input, std::regex("(^[ ]*|[ ]*$)"), "");

    switch (INPUT_END) {
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

void Interpreter::interpret(std::string input, bool &keepOpen) {
    trim(input);

    if (input == "exit") {
        keepOpen = false;
        return;
    }

    std::cout << "Implement interpretation of: " << input;
}
