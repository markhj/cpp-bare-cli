#include <iostream>
#include "console.h"
#include "../config/cli.h"
#include "./interpreter.h"

void Console::welcome() {
    std::cout << WELCOME << "\n";
}

void Console::close() {
    keepOpen = false;
}

void Console::next() {
    std::string input;
    std::cout << "\n" << INPUT_PREFIX << " " << std::flush;
    std::getline(std::cin, input);
    Interpreter::interpret(input, keepOpen);

    history.push_back(input);
}

void Console::printError(std::string err) {
    std::cout << err << std::flush;
}

bool Console::running() {
    return keepOpen;
}

