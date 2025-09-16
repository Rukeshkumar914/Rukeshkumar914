/*41. Write a program to print all Armstrong numbers under 
1000 */

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    double sum = 0.0;

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

    return (static_cast<int>(sum) == num);
}

int main() {
    cout << "Armstrong numbers under 1000 are:\n";
    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

