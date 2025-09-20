#include<iostream>
using namespace std;
void display(int a[]){
      for(int i=0; i<=4; i++){
            cout<<a[i]<<" ";
      }
      cout<<endl;
}
void change(int b[]){
      b[0] = 100;
}
int main(){
      int arr[5] = {4,6,9,2,9};
      //accessing the elemens of arrays in another funcution
      //updating, pass by value / reference 
      display(arr);
      change(arr);
      display(arr);
}