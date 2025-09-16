/*10. WAP to take time as an input in below given format and 
convert the time format and display the result as given 
below. 
User Input date format – “HH:MM” */
#include <iostream>
#include <string>

int main() {
    std::string time;
    int hours, minutes;
    char colon;
    std::cout << "Enter time (HH:MM): ";
    std::getline(std::cin, time);
    if (time.length() == 5 && time[2] == ':') {
        hours = (time[0] - '0') * 10 + (time[1] - '0');
        minutes = (time[3] - '0') * 10 + (time[4] - '0');

        if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59) {
            std::string period = "AM";
            if (hours >= 12) {
                period = "PM";
                if (hours > 12) hours -= 12;
            } else if (hours == 0) {
                hours = 12;
            }

            std::cout << "Converted time: " << hours << ":";
            if (minutes < 10) std::cout << "0"; // Add leading zero if needed
            std::cout << minutes << " " << period << std::endl;
        } else {
            std::cout << "Invalid time. Hours (0-23), Minutes (0-59)." << std::endl;
        }
    } else {
        std::cout << "Invalid format. Use HH:MM." << std::endl;
    }

    return 0;
}