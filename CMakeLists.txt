cmake_minimum_required(VERSION 3.29)
project(simpleConsoleCalcualtor)

set(CMAKE_CXX_STANDARD 20)

add_executable(simpleConsoleCalcualtor main.cpp
        scc_getUserInputs.cpp
        scc_doCalculations.cpp
        scc_errorMessage.cpp
        functions.h
)
