#include<iostream>
using namespace std;

int main() {
    int a = 3, b = 5;

    // Relational operators(==, !=, <, >, <=, >=)
    bool result = a == b;
    cout << a << " is equals to " << b << ".  (" << result << ")" << endl;

    result = a != b;
    cout << a << " is not equals to " << b << ".  (" << result << ")" << endl;

    result = a > b;
    cout << a << " is greater than " << b << ".  (" << result << ")" << endl;

    result = a < b;
    cout << a << " is less than " << b << ".  (" << result << ")" << endl;

    result = a >= b;
    cout << a << " is greater than equal " << b << ".  (" << result << ")" << endl;

    result = a <= b;
    cout << a << " is less than equal " << b << ".  (" << result << ")\n" << endl;

    // Logical operators(&&, ||, !)
    cout << ((a == 0) && (a > b)) << endl;  // False
  
    cout << ((a == 0) || (a < b)) << endl;  // True

    cout << !(a == b) << endl;  // True

    return 0;
}