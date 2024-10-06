#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Tarnery operator
    // condition ? expression_if_true : expression_if_false;
    int max = (a > b) ? a : b;

    cout << "The maximum number is " << max << endl;

    int c = 25;

    // Nested tarnery operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The maximum number is " << max << endl;

    return 0;
}