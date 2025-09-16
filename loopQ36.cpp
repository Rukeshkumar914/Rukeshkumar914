/*36. Write a program to check whether two given numbers 
are co-prime numbers or not.*/

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

    if (hcf == 1)
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    else
        cout << num1 << " and " << num2 << " are NOT co-prime numbers." << endl;

    return 0;
}

