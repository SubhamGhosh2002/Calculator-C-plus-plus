#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Arithmetic Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+ for addition, - for subtraction, * for multiplication, / for division): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation entered." << endl;
            return 1;  // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}