//Write a program to calculate average of three integers.Numbers are given by the user. 
#include <iostream>
using namespace std;
int main() {
    int numbers[3];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / 3;
    cout << "The average of " << numbers[0] << ", " << numbers[1] << ", and " << numbers[2] << " is: " << average << endl;

    return 0;
}