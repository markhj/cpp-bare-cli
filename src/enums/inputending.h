#ifndef CPP_BARE_CLI_INPUTENDING_H
#define CPP_BARE_CLI_INPUTENDING_H

enum InputEnding {
    NoLineEnding = 0x1f,
    OptionalLineEnding = 0x2f,
    RequiredLineEnding = 0x3f,
};

#endif
