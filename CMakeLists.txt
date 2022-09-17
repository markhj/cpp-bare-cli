cmake_minimum_required(VERSION 3.23)
project(cpp_bare_cli)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_bare_cli src/main.cpp src/config/cli.h src/enums/inputending.h src/classes/interpreter.cpp src/classes/interpreter.h src/exceptions/invalidinput.cpp src/exceptions/invalidinput.h src/exceptions/exception.cpp src/exceptions/exception.h src/classes/console.cpp src/classes/console.h)
