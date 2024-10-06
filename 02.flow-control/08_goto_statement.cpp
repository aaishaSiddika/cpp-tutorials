#include<iostream>
using namespace std;

int main() {
    int x = 10;

    if(x == 10) {
        goto skip;
    }

    cout << "This line will be skipped." << endl;

skip:
    cout << "This line will be executed." << endl;

    return 0;
}