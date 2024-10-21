// libaraies
#include <iostream>
#include <cmath>

// namespaces
using namespace std;

// functions ( inside the curly brackets its called the function body)
double add (double a, double b) {
    return a + b;
}
double sub (double a, double b) {
    return a - b;
}
double multiply (double a, double b) {
    return a * b;
}
double divide (double a, double b) {
    return a / b;
}

int main() {
    //variables
    double firstVariable  {};
    char operation        {};
    char yesNo            {};
    double secondVariable {};
    bool inputsCompleted  {};

    while (not inputsCompleted) {
        cout << "Enter first variable, then enter your operator, lastly your last variable: ( x + y )" << '\n';
        cin >> firstVariable >> operation >> secondVariable;

        double result {};
        switch (operation) {
            case '+':
                result = add(firstVariable, secondVariable);
            break;
            case '-':
                result = sub(firstVariable, secondVariable);
            break;
            case '/':
                result = divide(firstVariable, secondVariable);
            break;
            case '*':
                result = multiply(firstVariable, secondVariable);
            break;
            default:
                cout << "Invalid operation or missing variable!" << '\n';
                return 1;

        }


        cout << "Result: " << result << '\n';
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
