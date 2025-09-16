/*26. Write a program to calculate sum of cubes of first N 
natural numbers */

#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i * i * i;  // Add cube of i to sum
    }
    cout << "Sum of cubes of first " << N << " natural numbers is: " << sum << endl;
    return 0;
}
