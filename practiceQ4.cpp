//4. Write a program to calculate volume of a cuboid. 
#include <iostream>
using namespace std;
int main() {
    double length, width, height;
    cout << "Enter length of the cuboid: ";
    cin >> length;
    cout << "Enter width of the cuboid: ";
    cin >> width;
    cout << "Enter height of the cuboid: ";
    cin >> height;
    double volume = length * width * height;
    cout << "The volume of the cuboid with length " << length 
         << ", width " << width << ", and height " << height 
         << " is: " << volume << " cubic units" << endl;

    return 0;
}
