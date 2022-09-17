#ifndef CPP_BARE_CLI_INVALIDINPUT_H
#define CPP_BARE_CLI_INVALIDINPUT_H


#include "./exception.h"

class InvalidInputException : public Exception {
public:
    InvalidInputException(std::string msg) : Exception(msg) { }
};


#endif
