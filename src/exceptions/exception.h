#ifndef CPP_BARE_CLI_EXCEPTION_H
#define CPP_BARE_CLI_EXCEPTION_H

#include <iostream>

class Exception {
protected:
    std::string message;
public:
    Exception(std::string msg) {
        message = msg;
    }
    std::string getMessage();
};


#endif
