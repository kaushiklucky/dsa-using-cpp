// Write a program to print the row number having the maximum sum in a given matrix.
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
      int sum = 0, p;
      int max = INT_MIN;
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                sum += arr[i][j];  
            }
            if(max<sum){
                  max = sum;
                  p = i;
            }    
      }
      cout<<p;
}