//2. Write a program to calculate circumference of a circle. 
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.1415; // Constant for PI
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circumference = 2 * PI * radius;
    cout << "The circumference of the circle with radius " << radius << " is: " << circumference << endl;

    return 0;
}