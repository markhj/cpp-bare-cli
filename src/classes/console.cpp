#include <iostream>
#include "console.h"
#include "./interpreter.h"

void Console::welcome() {
    std::cout << config.welcome << "\n";
}

void Console::close() {
    keepOpen = false;
}

void Console::next(std::string input) {
    Interpreter::interpret(input, &config, keepOpen);

    history.push_back(input);
}

void Console::printError(std::string err) {
    std::cout << err << std::flush;
}

bool Console::running() {
    return keepOpen;
}

