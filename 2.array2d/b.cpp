#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter row no : ";
    cin >> m;
    cout << "Enter colom no : ";
    cin >> n;
    int arr[m][n];
    cout << "Enter elements in array : ";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = i + 1; j < n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"array after swapped: \n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        // Swap the first column (index 0) with the third column (index 2)
        int temp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = temp;
    }

    cout<<"array is rotated by 90 degree: \n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<< arr[i][j]<<" ";
        }cout<<endl;
    }
}