#include<iostream>
using namespace std;

int main() {
    int n = 5, i = 0;

    // while loop
    while(i < n) {
        cout << i + 1 << " ";
        i++;
    }
    cout << "\n\n";

    i = 0;

    // Nested while loop
    while(i < n) {  // First loop
        int j = 0;

        cout << "i = " << i << endl;
        while(j < i) {  // Second loop
            cout << "      j = " << j << endl;
            j++;
        }
        i++;
    }

    return 0;
}