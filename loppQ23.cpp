/*23. Write a program to calculate sum of first N even natural 
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

    int count = 0;
    int num = 2;   
    while (count < N) {
        sum += num;
        num += 2;  
        count++;
    }

    cout << "Sum of first " << N << " even natural numbers is: " << sum << endl;

    return 0;
}