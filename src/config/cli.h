#ifndef CPP_BARE_CLI_CLI_H
#define CPP_BARE_CLI_CLI_H

#include "../enums/inputending.h"

// The message displayed when the program starts
inline constexpr std::string_view WELCOME = "C++ Bare CLI\nVersion 0.1.0";

// Choose the requirement for a trailing character on user inputs
// You can choose
//      * NoLineEnding: Doesn't expect an ending character, nor will it filter it
//      * OptionalLineEnding: Doesn't require an ending character, but will filter it
//      * RequireLineEnding: Requires ending character and will filter it
inline constexpr InputEnding INPUT_END = OptionalLineEnding;

// Define how the line the user can type into looks at its beginning
inline constexpr std::string_view INPUT_PREFIX = "> ";

// If INPUT_END is either OptionalLineEnding or RequireLineEnding, you can configure
// which symbol is expected to end the line
inline constexpr const char *const INPUT_END_CHAR = ";";

#endif
