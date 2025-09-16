/*15. Create a program that takes the lengths of three sides of a 
triangle as input and determines whether the triangle is 
equilateral, isosceles, or scalene. */

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter the length of first side: ";
    cin >> side1;
    cout << "Enter the length of second side: ";
    cin >> side2;
    cout << "Enter the length of third side: ";
    cin >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || 
        (side1 + side2 <= side3) || (side2 + side3 <= side1) || (side1 + side3 <= side2)) {
        cout << "Invalid input: These side lengths cannot form a triangle." << endl;
    } else {
        
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    }

    return 0;
}