#include<iostream>
using namespace std;
int main(){
      int arr[] = { 2,4,6,8,5,9,1};
      int* ptr = arr;
      cout<<ptr<<endl;
      int *ptr1 = &arr[0];  // ptr1 and ptr are same, can access all elements and modify it by using ptr
      cout<<ptr1<<endl;

      ptr[1]=100;

      for(int i=0; i<6; i++){
            cout<<ptr[i]<<" ";
      }
      cout<<endl;

      for(int i=0; i<6; i++){
            cout<<*ptr<<" ";
      }
      cout<<endl;

      *ptr = 50;  // ptr[0]=100

      for(int i=0; i<6; i++){
            cout<<ptr[i]<<" ";
      }
      cout<<endl;

      for(int i=0; i<6; i++){  
            cout<<*ptr<<" ";
            ptr++;  
      }
      ptr = arr;   // to storing initial value of array .. as when we treverse array by pointer it lost array value so it is suggested to inisialise again ptr = arr
      cout<<endl;

      for(int i=0; i<6; i++){
            cout<<i[ptr]<<" ";
      }
      cout<<endl;

}