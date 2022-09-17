This **C++ Bare CLI** source code is intended to quickly initialize a C++ CLI project which takes instructions until explicitly exited.
It also has basic class-based exception handling.

# Prerequisites

The code is based on C++ 23, but should be easily ported to earlier versions, if needed.

# How to get started

* Fork this repository
* Make a quick test build to see if it compiles (you can close by typing "exit")
* Inspect ``src/config/cli.h`` to configure fundamental behavior
* Expand the ``Interpreter::interpret`` method to your needs