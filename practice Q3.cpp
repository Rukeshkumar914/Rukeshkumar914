//3. Write a program to calculate simple interest. 
#include <iostream>
using namespace std;
int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    double simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest for principal $" << principal 
         << ", rate " << rate << "%, and time " << time 
         << " years is: $" << simpleInterest << endl;

    return 0;
}
