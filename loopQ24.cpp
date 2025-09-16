/*24 Write a program to calculate sum of first N odd natural 
numbers */

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
    int count = 0; // To track the number of odd numbers found
    int num = 1;   // Start with the first odd natural number
    while (count < N) {
        sum += num;
        num += 2;  // Move to the next odd number
        count++;
    }

    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}