/*Q25Write a program to calculate sum of squares of first N natural numbers in loop in c++*/


#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i * i;  // Add square of i to sum
    }
    cout << "Sum of squares of first " << N << " natural numbers is: " << sum << endl;
    return 0;
}