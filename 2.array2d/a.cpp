#include<iostream>
using namespace std;
int main(){
      int m,n;
      cout<<"Enter row no : ";
      cin>>m;
      cout<<"Enter colom no : ";
      cin>>n;
      int arr[m][n];
      cout<<"Enter elements in array : ";
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  cin>>arr[i][j];
            }
      }
      int brr[m][n];
      int a = n;
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                brr[i][a-1] = arr[i][j];
            }
            a--;
            cout<<endl;
      }
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
              cin>>brr[i][j];
        }
  }
}