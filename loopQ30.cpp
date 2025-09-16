/*30. Write a program to calculate LCM of two numbers */

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only." << endl;
        return 1;
    }

    int gcdValue = gcd(num1, num2);
    int lcm = (num1 / gcdValue) * num2;  // To avoid overflow

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
