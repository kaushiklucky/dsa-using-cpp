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
      int minrow = 0;
      int mincolom = 0;
      int maxrow = m-1;
      int maxcolom = n-1;

      int tne = m*n;
      int count = 0;

      while(minrow<=maxrow && mincolom<=maxcolom){
            //right
            for(int i=mincolom; i<=maxcolom && count<tne; i++){
                  cout<<arr[minrow][i]<<" ";
                  count++;
            }
            minrow++;
            //down
            for(int i=minrow; i<=maxrow && count<tne; i++){
                  cout<<arr[i][maxcolom]<<" ";
                  count++;
            }
            maxcolom--;
            //left
            for(int i=maxcolom; i>=mincolom && count<tne; i--){
                  cout<<arr[maxrow][i]<<" ";
                  count++;
            }
            maxrow--;
            //top
            for(int i=maxrow; i>=minrow && count<tne; i--){
                  cout<<arr[i][mincolom]<<" ";
                  count++;
            }
            mincolom++;
            
      }
}