/*16. Develop a program that converts a temperature from 
Fahrenheit to Celsius or vice versa based on user input. The 
user should specify the type of conversion.*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char conversionType;
    double temperature, convertedTemp;

    cout << "Enter conversion type (F for Fahrenheit to Celsius, C for Celsius to Fahrenheit): ";
    cin >> conversionType;
    conversionType = toupper(conversionType); // Convert to uppercase for case-insensitive input

    cout << "Enter temperature: ";
    cin >> temperature;

    if (conversionType == 'F') {
        convertedTemp = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << " Fahrenheit = " << convertedTemp << " Celsius" << endl;
    } else if (conversionType == 'C') {
        convertedTemp = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << " Celsius = " << convertedTemp << " Fahrenheit" << endl;
    } else {
        cout << "Invalid conversion type! Please enter 'F' or 'C'." << endl;
    }

    return 0;
}