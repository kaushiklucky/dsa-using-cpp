//Write a function which accepts a 2D array of integers and its size as arguments and displays the
//elements of middle row and the elements of middle column.
#include<iostream>
#include<climits>
using namespace std;
int main(){
      int m,n;
      cout<<"Enter row no : ";
      cin>>m;
      cout<<"Enter column no : ";
      cin>>n;
      int arr[m][n];
      cout<<"Enter elements in array : ";
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  cin>>arr[i][j];
            }
      }

      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  if(i==n/2 || j==n/2) cout<<arr[i][j]<<" ";
                  else cout<<" ";
            }
            cout<<endl;     
            
      }
}