//
// Created by Alex Briggs on 10/23/24.
//
#include <iostream>
#include <cmath>

void errorMessage(const std::string& msg);

auto doCalculations(const double firstVar, const double secondVar,
                    const char operation) -> double {
    switch(operation) {
        case '+':
            return firstVar + secondVar;
            break;
        case '-':
            return firstVar - secondVar;
            break;
        case '*':
            return firstVar * secondVar;
            break;
        case '/':
            return firstVar / secondVar;
            break;
        case '^':
            return pow(firstVar, secondVar);
            break;
        case'r':
            return sqrt(firstVar);
            break;


        default:
            errorMessage("Something went wrong with the calculation");
            return 1;
    }
}
