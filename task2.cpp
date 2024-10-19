using namespace std;
#include <iostream>

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;


    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;


    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break; 
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Result: " << num1 / num2 << endl;
            break;
        case '%':
            cout << "Result: " << num1 % num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
