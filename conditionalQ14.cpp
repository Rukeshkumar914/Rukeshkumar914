/*Q14. Write a program that reads two integers from the user 
and determines if the first integer is divisible by the second 
integer.*/

#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter the first integer: ";
    cin >> first;
    cout << "Enter the second integer: ";
    cin >> second;

    if (second == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else if (first % second == 0) {
        cout << first << " is divisible by " << second << "." << endl;
    } else {
        cout << first << " is not divisible by " << second << "." << endl;
    }

    return 0;
}