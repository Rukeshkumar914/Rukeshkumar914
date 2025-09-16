/*13. Develop a program that takes a student's score (0-100) as 
input and prints the corresponding grade (e.g., A, B, C, D, F) 
based on a grading scale.*/

#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score! Score must be between 0 and 100." << endl;
    } else if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}