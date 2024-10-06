#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // if statement
    if(a > 0) {
        cout << a << "(a) is greater than 0" << endl;
    }
    cout << endl;

    // if...else statement
    if(b > 0) {
        cout << b << "(b) is greater than 0" << endl;
    } else {
        cout << b << "(b) is not greater than 0" << endl;
    }
    cout << endl;

    // if...else...else if statement
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (b > a) {
        cout << b << " is greater than " << a << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}