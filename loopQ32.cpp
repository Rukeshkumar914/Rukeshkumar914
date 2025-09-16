/*32. Write a program to find the Nth term of the Fibonacci 
series.*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the term number (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    if (N == 1) {
        cout << "The 1st term of the Fibonacci series is: 0" << endl;
        return 0;
    }
    if (N == 2) {
        cout << "The 2nd term of the Fibonacci series is: 1" << endl;
        return 0;
    }

    int a = 0, b = 1, nthTerm;
    for (int i = 3; i <= N; ++i) {
        nthTerm = a + b;
        a = b;
        b = nthTerm;
    }

    cout << "The " << N << "th term of the Fibonacci series is: " << nthTerm << endl;

    return 0;
}
