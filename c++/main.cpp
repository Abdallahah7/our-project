#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char choice;
    double num1, num2, result;

    do {
        cout << "=== Basic Calculator ===" << endl;
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /, %): ";
        cin >> choice;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Cannot divide by zero." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;
            case '%':
                if (num2 == 0) {
                    cout << "Error: Cannot divide by zero." << endl;
                } else {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "Result: " << result << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please use +, -, *, /, or %." << endl;
                break;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << endl;
    } while (true);

    return 0;
}