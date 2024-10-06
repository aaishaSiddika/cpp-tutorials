#include<iostream>
using namespace std;

// Function overloading (Same name, different arguments)

// Function with integer type parameters
int sum(int a, int b) {
    return a + b;
}

// Function with three parameters
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function with floating point type parameters
float sum(float a, float b) {
    return a + b;
}

int main() {
    int a = 21, b = 35, c = 77;
    float m = 37.13, n = 73.21;

    cout << a << " + " << b << " = " << sum(a, b) << endl;
    cout << m << " + " << n << " = " << sum(m, n) << endl;
    cout << a << " + " << b << " + " << c << " = " << sum(a, b, c) << endl;

    return 0;
}