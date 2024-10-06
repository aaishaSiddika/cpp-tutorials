#include<iostream>
using namespace std;

// Functionn without parameters
// Function prototype
void display();

// Function declaration and definition
int sum() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "This is the sum() function." << endl;

    return a + b;  // Return statement
}

int main() {
    // Calling the function before declaration
    display();

    // Function call
    int add = sum();
    cout << "Sum = " << add << endl;

    return 0;
}

// Function definition
void display() {
    cout << "This is the display function." << endl;
}