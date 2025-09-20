#include<iostream>
using namespace std;
int main(){
      int i, n;
      cout<<"Enter size of array : ";
      cin>>n;
      int arr[n];
      for(i=0; i<=n-1; i++){
            cin>>arr[i];
      }
      int product = 1;
      for(i=0; i<=n-1; i++){
           product = product * arr[i];
      }
      cout<<product;
}