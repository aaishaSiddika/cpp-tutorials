#include<iostream>
using namespace std;

// Function to calculate factorials recursively
int factorial(int n) {
    if(n > 0) {
        return n * factorial(n - 1);  // Calls itself
    } else {
        return 1;
    }
}

int main() {
    int n = 5;

    int fact = factorial(n);
    cout << n << "! = " << fact << endl;

    return 0;
}