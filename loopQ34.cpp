/*34. Write a program to check whether a given number is 
there in the Fibonacci series or not.*/

#include <iostream>
using namespace std;
bool isFibonacci(int num) {
    if (num == 0 || num == 1)
        return true;

    int a = 0, b = 1;
    while (b < num) {
        int next = a + b;
        a = b;
        b = next;
    }
    return (b == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
        cout << num << " is in the Fibonacci series." << endl;
    else
        cout << num << " is NOT in the Fibonacci series." << endl;

    return 0;
}

