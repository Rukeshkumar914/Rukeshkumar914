/*19. Develop a program that takes a month (as an integer from 
1 to 12) and a year as input, then prints the number of days 
in that month, considering leap years.*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a number between 1 and 12." << endl;
        return 1;
    }

    int days;
    switch (month) {
        case 2: // February
            days = isLeapYear(year) ? 29 : 28;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        default: 
            days = 31;
            break;
    }
    cout << "Number of days in month " << month << " of year " << year << ": " << days << endl;

    return 0;
}