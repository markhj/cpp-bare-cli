#ifndef CPP_BARE_CLI_CONSOLE_H
#define CPP_BARE_CLI_CONSOLE_H

#include <iostream>
#include <vector>

class Console {
protected:
    std::vector<std::string> history { };
    bool keepOpen = true;
public:
    void welcome();
    void close();
    void next();
    void printError(std::string err);
    bool running();
};


#endif
