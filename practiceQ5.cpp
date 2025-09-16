//Q5. Write a program to ask user about the cost price and selling 
//price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include <iostream>
using namespace std;
int main() {
    double costPrice, sellingPrice, profitOrLoss;

    cout << "Enter cost price per dozen bananas: ";
    cin >> costPrice;
    
    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPrice;
    profitOrLoss = (sellingPrice / 12 * 25) - (costPrice / 12 * 25);

    cout.setf(ios::fixed);
    cout.precision(2);
    if (profitOrLoss > 0) {
        cout << "Profit:  " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss: $" << -profitOrLoss << endl;
    } else {
        cout << "No profit or loss" << endl;
    }

    return 0;
}