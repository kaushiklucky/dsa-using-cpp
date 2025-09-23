#include<iostream>
#include<climits>
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
      //search
      int max = INT_MIN;
      for(i=0; i<=n-1; i++){
            if(max<arr[i]) max = arr[i]; 
      }
      
      int smax = INT_MIN;
      for(i=0; i<=n-1; i++){
            if(arr[i]!=max && smax<arr[i]) smax = arr[i];
      }

      int tmax = INT_MIN;
      for(i=0; i<=n-1; i++){
            if(arr[i]!=max && arr[i]!=smax && tmax<arr[i]) tmax = arr[i];
      }

      cout<<"largest element "<<max<<endl;
      cout<<"second largest element "<<smax<<endl;
      cout<<"third largest element "<<tmax<<endl;

}