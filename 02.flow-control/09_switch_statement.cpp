// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    float a, b;
    char oper;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}