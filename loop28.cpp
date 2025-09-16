/*28. Write a program to count digits in a given number*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    if (number < 0) {
        number = -number;
    }

    int count = 0;
    while (number > 0) {
        number /= 10;  // Remove last digit
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
