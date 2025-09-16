//Q.6 Write a program to input a character from the user and print its ASCII code.
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII code of " << ch << " is " << (int)ch << endl;
    
    return 0;
}