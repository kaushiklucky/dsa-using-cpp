#include<iostream>
using namespace std;
int main(){
      int arr[] = { 2,4,6,8,5,9,1};
      int* ptr = arr;
      int *ptr1 = &arr[0];  // ptr1 and ptr are same, can access all elements and modify it by using ptr

      for(int i=0; i<6; i++){  
            cout<<*ptr<<" ";
            ptr++;  
      }
      ptr = arr;   // to storing initial value of array .. as when we treverse array by pointer it lost array value so it is suggested to inisialise again ptr = arr
      cout<<endl;

      ptr1 = arr; //ptr1 is pointing to first element (zeroth index)
      *ptr1 = 90; //it means ptr[0]=90
      ptr1++; // ptr1 pointing to second element (first index)... when we increament in poiner it increament by its data type ie for int 4 byte
      cout<<"ptr1 is poiting to second element of array after ptr1++ that is "<<*ptr1<<endl;
      *ptr1 = 69; // ptr1[1] = 69
      ptr1++;  //poitting to third element
      cout<<"ptr1 is poiting to third element of array after ptr1+=2 that is "<<*ptr1<<endl;
      *ptr1 = 30; // ptr1[2] = 678
      ptr1-=2;  // decrimenting 2 time so that ptr1 point to again first element 
      cout<<"ptr1 is poiting to first element of array after ptr1-=2 that is "<<*ptr1<<endl;

      for(int i=0; i<6; i++){  
            cout<<*ptr1<<" ";
            ptr1++;  
      }
      ptr1 = arr;
      
      cout<<endl;
      cout<<endl;
      

      cout<<"{ 90,69,30,8,5,9,1 }"<<endl;
      cout<<"ptr1[0] "<<*ptr1<<endl;
      ptr1++;
      cout<<"ptr1[1] "<<*ptr1<<endl;
      ptr1++;
      cout<<"ptr1[2] "<<*ptr1<<endl;
      ptr1++;
      cout<<"ptr1[3] "<<*ptr1<<endl;
      ptr1++;
      cout<<"ptr1[4] "<<*ptr1<<endl;
      ptr1+=2;
      cout<<"ptr1[6] "<<*ptr1<<endl;

      cout<<endl;
      
      cout<<"{ 90,69,30,8,5,9,1 }"<<endl;
      cout<<"ptr1[6] "<<*ptr1<<endl;
      ptr1--;
      cout<<"ptr1[5] "<<*ptr1<<endl;
      ptr1--;
      cout<<"ptr1[4] "<<*ptr1<<endl;
      ptr1-=2;
      cout<<"ptr1[2] "<<*ptr1<<endl;
      ptr1--;
      cout<<"ptr1[1] "<<*ptr1<<endl;
      ptr1--;
      cout<<"ptr1[0] "<<*ptr1<<endl;
      

}