/*27. Write a program to calculate factorial of a number*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; // Exit with error
    }
    unsigned long long factorial = 1; // Use unsigned long long for large factorials
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}