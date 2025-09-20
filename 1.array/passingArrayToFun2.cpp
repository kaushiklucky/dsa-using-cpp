#include<iostream>
using namespace std;
void display(int a[], int size){
      for(int i=0; i<=size-1; i++){
            cout<<a[i]<<" ";
      }
      cout<<endl;
}
void change(int b[], int size){
      b[0] = 100;
}
int main(){
      int arr[5] = {4,6,9,2,9};
      int size = sizeof(arr)/sizeof(arr[0]);
      cout<<size<<endl;
      //accessing the elemens of arrays in another funcution
      //updating, pass by value / reference 
      display(arr,size);
      change(arr,size);
      display(arr,size);
}