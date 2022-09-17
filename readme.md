This **C++ Bare CLI** source code is intended to quickly initialize a C++ CLI project which takes instructions until explicitly exited.

# Features
* Ready for business logic implementation
* Stays alive until exited
* Class-based exception handling

# Prerequisites
The code is based on C++ 23, but should be easily ported to earlier versions, if needed.

# How to get started
* Fork this repository
* Make a quick test build to see if it compiles (you can close by typing "exit")
* Inspect the ``Config`` struct in ``main.cpp`` to configure fundamental behavior
* Build your implementation in the ``impl`` directory. The ``Impl::main`` method is called after parsing is handled