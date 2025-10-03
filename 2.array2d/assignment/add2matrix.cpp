//Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;
int main(){
      int m,n;
      cout<<"Enter row no of 1st matrix : ";
      cin>>m;
      cout<<"Enter colom no 1st matrix : ";
      cin>>n;
      int arr[m][n];
      int p,q;
      cout<<"Enter row no 2nd matrix : ";
      cin>>p;
      cout<<"Enter colom no 2nd matrix : ";
      cin>>q;
      int brr[p][q];
      cout<<"Enter elements in array 1st matrix : ";
      for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                  cin>>arr[i][j];
            }
      }
      cout<<"Enter elements in array 2nd matrix : ";
      for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                  cin>>brr[i][j];
            }
      }
      int result[m][q];
      if(m==p && n==q){
            for(int i=0; i<m; i++){
                  for(int j=0; j<q; j++){
                        result[i][j] = arr[i][j] + brr[i][j]; 
                  }
            }
      }
      else{
            cout<<"matrix addition not possible";
      }
      for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                  cout<<result[i][j]<<" ";
            }
            cout<<endl;
      }
}