#include <iostream>
using namespace std;
int main()
{
      int x, y, m, n;
      cout << "Enter first matrix row no. : ";
      cin >> x;
      cout << "Enter first matrix colom no. : ";
      cin >> y;
      int arr[x][y];
      cout << "Enter second matrix row no. : ";
      cin >> m;
      cout << "Enter second matrix colom no. : ";
      cin >> n;
      int brr[m][n];
      int res[m][n];
      if (x != m || y != n){
            cout << "Addition not possible";
      }
      else{
            cout<<"Enter first matrix : ";
            for (int i = 0; i < x; i++){
                  for (int j = 0; j < y; j++){
                        cin >> arr[i][j];
                  }
            }
            cout<<"Enter second matrix : ";
            for (int i = 0; i < m; i++){
                  for (int j = 0; j < n; j++){
                        cin >> brr[i][j];
                  }
            }
            for (int i = 0; i < m; i++){
                  for (int j = 0; j < n; j++){
                        res[i][j] = arr[i][j]+brr[i][j];
                  }
            }
            cout<<"resultent matrix : "<<endl;
            for (int i = 0; i < m; i++){
                  for (int j = 0; j < n; j++){
                        cout<< res[i][j]<<" ";
                  }
                  cout<<endl;
            }
      }
}