/*11. Write a program to input three characters from the user 
and display characters with their corresponding ASCII 
codes.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    cout << "Enter third character: ";
    cin >> ch3;

    cout << "\nCharacter | ASCII Code\n";
    cout << "----------|-----------\n";
    cout << setw(9) << left << ch1 << "| " << setw(9) << (int)ch1 << endl;
    cout << setw(9) << left << ch2 << "| " << setw(9) << (int)ch2 << endl;
    cout << setw(9) << left << ch3 << "| " << setw(9) << (int)ch3 << endl;

    return 0;
}