#include<iostream>
using namespace std;

// Function with parameters
float division(float a, float b) {
    return a / b;
}

int main() {
    float num1 = 10.0, num2 = 7.0;

    float div = division(num1, num2);
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    return 0;
}