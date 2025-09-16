/*35. Write a program to calculate HCF of two numbers. */

#include <iostream>
using namespace std;

int calculateHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int hcf = calculateHCF(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf << endl;

    return 0;
}

