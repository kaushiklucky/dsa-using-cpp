// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define the dimensions of the matrix
    const int rows = 5;
    const int cols = 5;
    
    // Create a 2D vector (matrix) with the specified dimensions
    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    // Fill the matrix with the value 10
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 10;
        }
    }
    
    // Print the matrix
    cout << "Matrix filled with 10s:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
