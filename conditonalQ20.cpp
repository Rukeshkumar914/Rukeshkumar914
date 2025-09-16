/*Q20 Develop a program that takes four numbers as input and 
prints the largest among them. */

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4;

    // Input four numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;

    // Find the largest number
    double largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }
    cout << "The largest number is: " << largest << endl;

    return 0;
}