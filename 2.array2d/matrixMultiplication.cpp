#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows of the first matrix: ";
    cin >> m;
    cout << "Enter columns of the first matrix: ";
    cin >> n;
    int arr[m][n];

    int p, q;
    cout << "Enter rows of the second matrix: ";
    cin >> p;
    cout << "Enter columns of the second matrix: ";
    cin >> q;
    int brr[p][q];

    if (n == p) {
        cout << "Enter elements in the first matrix: ";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        cout << "Enter elements in the second matrix: ";
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> brr[i][j];
            }
        }

        int res[m][q] = {0}; // Initialize result matrix with zeros

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < n; k++) {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        cout << "Resultant matrix: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The matrices cannot be multiplied." << endl;
    }

    return 0;
}
