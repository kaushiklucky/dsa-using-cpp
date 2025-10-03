//Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;
int main(){
      int m,n;
      cout<<"Enter row no of 1st matrix : ";
      cin>>m;
      cout<<"Enter colom no 1st matrix : ";
      cin>>n;
      int arr[m][n];
      cout<<"Enter elements in array : ";
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  cin>>arr[i][j];
            }
      }
      int max = INT_MIN;
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  if(arr[i][j]>max) max = arr[i][j];
            }
      }
      cout<<max;
}