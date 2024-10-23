#include <iostream>
#include <cmath>
#include "functions.h"

int main() {
    char yesNo{};
    bool inputsCompleted{};

    while (!inputsCompleted) {
        getUserInputs();
        double firstVariable{};
        char operation{};
        double secondVariable{};
        std::cin >> firstVariable >> operation >> secondVariable;

        double result{doCalculations(firstVariable, secondVariable, operation)};

        std::cout << "Result: " << result << '\n';
        std::cout << "Would you like another calculation? (y/n) " << '\n';
        std::cin >> yesNo;

        if (yesNo == 'y' || yesNo == 'Y') {
            inputsCompleted = false;
        } else {
            inputsCompleted = true;
        }
    }
    std::cout << "Thank you for using simple console calculator!";
    return 0;
}
