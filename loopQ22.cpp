/*22. Write a program to calculate sum of first N natural numbers */

#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum = 0; 

    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input! N must be a positive integer." << endl;
        return 1;
    }
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}