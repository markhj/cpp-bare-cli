#ifndef CPP_BARE_CLI_INTERPRETER_H
#define CPP_BARE_CLI_INTERPRETER_H

#include <iostream>
#include "../structs/config.h"

class Interpreter {
private:
    static void trim(std::string &input, Config *config);
public:
    static void interpret(std::string input, Config *config, bool &keepOpen);
};


#endif
