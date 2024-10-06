#include<iostream>
using namespace std;

// Inline function
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num = 3;

    // Call the inline function
    cout << "The cube of " << num << " is " << cube(num) /* (x * x * x) */ << endl;  
                                                         // Insert the function's code directly into the caller’s code

    return 0;
}