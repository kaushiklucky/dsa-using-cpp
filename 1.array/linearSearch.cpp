#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the size of array : ";
      cin>>n;
      cout<<"Enter "<<n<<" numbers in array : ";
      int arr[n], i;
      //input
      for(i=0; i<=n-1; i++){
            cin>>arr[i];
      }

      int x;
      cout<<"Enter the number you want to search : ";
      cin>>x;
      //search
      bool flag = false; // --> not present
      for(i=0; i<=n-1; i++){
            if(arr[i]==x) flag = true;
      }
      if(flag==true) cout<<"Element found";
      else cout<<"Element not found";
}