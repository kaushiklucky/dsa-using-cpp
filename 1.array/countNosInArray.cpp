#include<iostream>
using namespace std;
int main(){
      int i, n;
      cout<<"Enter size in array : ";
      cin>>n;
      cout<<"Enter "<<n<<" element in array : ";
      int arr[n];
      for(i=0; i<=n-1; i++){
            cin>>arr[i];
      }

      int x;
      cout<<"Enter the number you want to check greater than or not : ";
      cin>>x;
      int count = 0;
      for(i=0; i<n; i++){
           if(arr[i]>x) count++;
      }
      cout<<count;
}