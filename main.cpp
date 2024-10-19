#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //variables
    double firstVariable {};
    char operation {};
    char yesNo {};
    double secondVariable {};
    double result {};
    bool inputsCompleted {};

    while (not inputsCompleted) {
        cout << "Enter first variable: " << '\n';
        cin >> firstVariable;
        cout << "Enter your operation: (+, -, /, *) " << '\n';
        cin >> operation;
        cout << "Enter second variable: " << '\n';
        cin >> secondVariable;

        switch (operation) {
            case '+':
                result = firstVariable + secondVariable;
            break;
            case '-':
                result = firstVariable - secondVariable;
            break;
            case '/':
                result = firstVariable / secondVariable;
            break;
            case '*':
                result = firstVariable * secondVariable;
            break;
            default:
                return 1;

        }

        cout << "Result: " << result << endl;
        cout << "Would you like another calculation? (y/n) " << '\n';
        cin >> yesNo;

        if (yesNo == 'y' || yesNo == 'Y') {
            inputsCompleted = false;
        } else {
            inputsCompleted = true;
        }

    }
    return 0;
}
