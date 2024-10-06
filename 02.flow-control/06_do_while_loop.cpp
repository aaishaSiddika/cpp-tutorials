#include<iostream>
using namespace std;

int main() {
    int n = 5, i = 0;

    // do...while loop
    do {
        cout << i + 1 << " ";
        i++;
    }while(i < n);
    cout << "\n\n";

    i = 0;

    // Nested do...while loop
    do {  // First loop
        cout << "i = " << i << endl;

        int j = 0;
        do {  // Second loop
            cout << "      j = " << j << endl;
            j++;
        } while(j < i);

        i++;
    }while(i < n);

    return 0;
}