/*40. Write a program to check whether a given number is an 
Armstrong number or not.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double sum = 0.0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
    	
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    if (static_cast<int>(sum) == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;

    return 0;
}

