/*31. Write a program to reverse a given number */

#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
    cout << "Enter an integer: ";
    cin >> number;

    int originalNumber = number;  

    bool isNegative = false;
    if (number < 0) {
        isNegative = true;
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10;         
        reversedNumber = reversedNumber * 10 + digit;  // Append digit
        number /= 10;                     
    }

    if (isNegative) {
        reversedNumber = -reversedNumber;
    }

    cout << "Reversed number of " << originalNumber << " is: " << reversedNumber << endl;

    return 0;
}

