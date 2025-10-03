#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter row size: "; 
    cin >> m;
    cout << "Enter col size: "; 
    cin >> n;

    int arr[m][n]; // Declare a 2D array

    cout << "Enter elements in array: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j]; // Use correct indexing
            if (arr[i][j] != 10) {
                cout << "Enter a valid number (10): ";
                j--; // Retry input for the same index
            }
        }
    }

    cout << "The array is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " "; // Use correct indexing
        }
        cout << endl;
    }

    return 0;
}
