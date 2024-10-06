#include<iostream>
using namespace std;

// Default argument definition
void display(char = '*', int = 3);

int main() {
    int n = 5;

    // Function call with no parameter
    cout << "No argument is passed: ";
    display();

    // Function callwith one parameter
    cout << "First argument is passed: ";
    display('#');

    // Function call with two parameters
    cout << "Both arguments are passed: ";
    display('$', 5);

    return 0;
}

// Function definition
void display(char ch, int count) {
    for(int i = 0; i < count; i++) {
        cout << ch;
    }
    cout << endl;
}