#include<iostream>
using namespace std;
int main(){
      int x,y;
      cout<<"Enter row no. : ";
      cin>>x;
      cout<<"Enter colom no. : ";
      cin>>y;
      cout<<"Enter elements in matrix : ";
      int arr[x][y];
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
      int trans[y][x];
      for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                  trans[i][j] = arr[j][i];
            }

      }
      cout<<"Transpose : "<<endl;
      for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                  cout<<trans[i][j]<<" ";
            }
            cout<<endl;
      }
}