#include <iostream>
using namespace std;

void swastika(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i < row/2) {
                if (j == 0 || j == col/2 || (i == 0 && j > col/2)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else if (i == row/2) {
                cout << "*";
            } else {
                if (j == col/2 || j == col-1 || (i == row-1 && j < col/2) ) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int row = 7, col = 7; 
	    swastika(row, col);
    return 0;
}
