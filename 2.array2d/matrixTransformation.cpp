#include<iostream>
using namespace std;
int main(){
      int m;
      cout<<"Enter square matrix row/colom no. : ";
      cin>>m;
      cout<<"Enter elements in matrix : ";
      int arr[m][m];
      for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                  cin>>arr[i][j];
            }
      }
      
      for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }
      
      for(int i=0; i<m; i++){
            for(int j=0; j<i+1; j++){
                  int temp = arr[i][j];
                  arr[i][j] = arr[j][i];
                  arr[j][i] = temp;
            }
      }
      cout<<"Transformed matrix : "<<endl;
      for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }
}