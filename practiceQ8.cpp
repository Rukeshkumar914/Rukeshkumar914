/*8. Write a program to input three characters from the user and 
display characters with their corresponding ASCII codes.*/
#include <iostream>
using namespace std;
int main() {
    char ch1, ch2, ch3;
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    cout << "Enter third character: ";
    cin >> ch3;
    
    cout << "Character and ASCII Codes:" << endl;
    cout << "1. '" << ch1 << "' - " << (int)ch1 << endl;
    cout << "2. '" << ch2 << "' - " << (int)ch2 << endl;
    cout << "3. '" << ch3 << "' - " << (int)ch3 << endl;
    
    return 0;
}