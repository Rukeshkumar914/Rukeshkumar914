/*12. Create a program that takes a person's age as input and 
classifies them into different age groups (e.g., child, 
teenager, adult, senior). */

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age! Age cannot be negative." << endl;
    } else if (age <= 12) {
        cout << "You are a Child." << endl;
    } else if (age <= 19) {
        cout << "You are a Teenager." << endl;
    } else if (age <= 59) {
        cout << "You are an Adult." << endl;
    } else {
        cout << "You are a Senior." << endl;
    }

    return 0;
}