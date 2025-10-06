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
      int sum = 0, counter = 0;
      int maxSum = INT_MIN;
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                sum += arr[i][j];  
            }
            if(maxSum<sum){
                  maxSum = sum;
            }sum = 0; counter++;
      }
      cout<<counter-1;
}