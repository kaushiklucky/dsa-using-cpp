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
      int sum = 0;
      for(i=0; i<=n-1; i++){
           sum = sum + arr[i];
      }
      cout<<sum;
}