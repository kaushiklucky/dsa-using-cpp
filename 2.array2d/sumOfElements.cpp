#include<iostream>
using namespace std;
int main(){
      int x,y;
      cout<<"Enter row no. : ";
      cin>>x;
      cout<<"Enter colom no. : ";
      cin>>y;
      int arr[x][y];
      int sum=0;
      for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                  cin>>arr[i][j];
            }
      }
      for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                 sum += arr[i][j];
            }
      }
     cout<<"Sum of array is "<<sum;
}