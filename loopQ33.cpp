/*33. Write a program to print first N terms of Fibonacci series.*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    int a = 0, b = 1;

    for (int i = 0; i < N; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}

