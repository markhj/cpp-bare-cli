#ifndef CPP_BARE_CLI_INTERPRETER_H
#define CPP_BARE_CLI_INTERPRETER_H

#include <iostream>

class Interpreter {
private:
    static void trim(std::string &input);
public:
    static void interpret(std::string input, bool &keepOpen);
};


#endif
