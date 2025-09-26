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

      while(minrow<=maxrow && mincolom<=maxcolom){
            //right
            for(int i=mincolom; i<=maxcolom; i++){
                  cout<<arr[minrow][i]<<" ";
            }
            minrow++;
            if(minrow>maxrow || mincolom>maxcolom) break;
            //down
            for(int i=minrow; i<=maxrow; i++){
                  cout<<arr[i][maxcolom]<<" ";
            }
            maxcolom--;
            if(minrow>maxrow || mincolom>maxcolom) break;
            //left
            for(int i=maxcolom; i>=mincolom; i--){
                  cout<<arr[maxrow][i]<<" ";
            }
            maxrow--;
            if(minrow>maxrow || mincolom>maxcolom) break;
            //top
            for(int i=maxrow; i>=minrow; i--){
                  cout<<arr[i][mincolom]<<" ";
            }
            mincolom++;
            
      }
}