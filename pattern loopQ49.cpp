#include <iostream>
using namespace std;
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        char alphabet = 'A';
        for (int j = 1; j <= i; j++) {
            cout << alphabet << " ";
            alphabet++;
        }
        cout <<endl;
    }
    return 0;
}
