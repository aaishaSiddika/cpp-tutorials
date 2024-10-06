#include<iostream>
using namespace std;

int main() {
    int n = 5;

    // for loop
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " ";
        if(i == 2) {
            break;  // When i is equal to 2, the break statement terminates the loop
        }
    }

    cout << endl << endl;

    for(int i = 0; i < n; i++) {
        if(i == 2) {
            continue;  // When i is equal to 2, the continue statement skips the current iteration and starts the next iteration
        }
        cout << i + 1 << " ";
    }

    return 0;
}