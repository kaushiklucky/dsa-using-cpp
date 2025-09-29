#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter row no. : ";
    cin >> m;
    cout << "Enter col no. : ";
    cin >> n;

    // Declare the matrix
    int arr[m][n];

    // Input matrix elements
    cout << "Enter elements in matrix : ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the original matrix
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose logic
    if (m == n) { // Check if the matrix is square
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < n; j++) { // Only swap elements where j > i
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    } else {
        cout << "Transpose not possible for non-square matrix in-place." << endl;
        return 0;
    }

    // Print the transposed matrix
    cout << "Transpose: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
