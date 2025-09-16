/*9. WAP to take date as an input in below given format and 
convert the date format and display the result as given 
below. 
User Input date format – “DD/MM/YYYY” (27/11/2022) 
Output format – “Day – DD , Month – MM , Year – YYYY” 
(Day – 27, Month – 07, Year – 2022)*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string date;
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;
    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);
    if (date.length() == 10 && date[2] == '/' && date[5] == '/') {
        cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;
    } else {
        cout << "Invalid date format! Please use DD/MM/YYYY format." << endl;
    }
    
    return 0;
}