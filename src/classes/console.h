#ifndef CPP_BARE_CLI_CONSOLE_H
#define CPP_BARE_CLI_CONSOLE_H

#include "../structs/config.h"
#include <iostream>
#include <vector>

class Console {
protected:
    Config config;
    std::vector<std::string> history { };
    bool keepOpen = true;
public:
    Console(Config cfg) {
        config = cfg;
    }
    void welcome();
    void close();
    void next(std::string input);
    void printError(std::string err);
    bool running();
};


#endif
