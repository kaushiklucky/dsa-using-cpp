#include<iostream>
using namespace std;
int main(){
      int x,y;
      cout<<"Enter no. of rows : ";
      cin>>x;
      cout<<"Enter no. of coloms : ";
      cin>>y;
      int arr[x][y];
      cout<<"Enter numbers: ";
      for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                  cin>>arr[i][j];
            }
      }
       for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }
}