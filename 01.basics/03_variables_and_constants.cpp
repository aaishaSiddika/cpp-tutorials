#include<iostream>
using namespace std;

int main() {
    float age = 21;  // Here, age is a variable of the int data type, and we have assigned an integer value 14 to it.
    cout << "Age: " << age << endl;

    age = 27;  // Changing the value of age
    cout << "Age: " << age << endl;

    const int LIGHT_SPEED = 299792458;  // We can not change the value of constant variables, we will get an error.
    cout << "The speed of light: " << LIGHT_SPEED << endl;

    return 0;
}