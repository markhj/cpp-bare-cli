#ifndef CPP_BARE_CLI_CONFIG_H
#define CPP_BARE_CLI_CONFIG_H

#include <string>
#include "../enums/inputending.h"

struct Config {
    std::string welcome;
    InputEnding input_ending;
    std::string input_prefix;
    std::string input_end_char;
};

#endif
