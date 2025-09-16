#include <iostream>

int main() {
    int rows = 4;
    int cols = 6;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            // Check for the boundary conditions
            if (i == 1 || i == rows || j == 1 || j == cols) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
