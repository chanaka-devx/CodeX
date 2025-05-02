#include <iostream>
using namespace std;

int main() {
    double num_1, num_2;
    char op;
    cout << "Enter first number: ";
    cin >> num_1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num_2;

    double result;
    switch(op) {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            if(num_2 != 0)
                result = num_1 / num_2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}
