#include<iostream>
using namespace std;

int main() {
    int n = 5;

    // for loop
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " ";
    }
    cout << "\n\n";
    
    int arr[] = {6, 7, 8, 9, 10};

    // Range based for loop
    for(int i : arr) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Nested for loops
    for (int i = 1; i <= 3; i++) {  // First loop
        for (int j = 1; j <= 3; j++) {  // Second loop
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}