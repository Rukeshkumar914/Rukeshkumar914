/*29. Write a program to check whether a given number is a 
Prime number or not*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
