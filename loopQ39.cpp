/*39. Write a program to find next Prime number of a given 
number.*/

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int nextPrime(int num) {
    int next = num + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int prime = nextPrime(num);
    cout << "The next prime number after " << num << " is " << prime << endl;

    return 0;
}

