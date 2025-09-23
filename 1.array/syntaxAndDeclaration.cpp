#include<iostream>
using namespace std;
int main(){
    int arry[7], i;
    cout<<"Enter numbers in array: ";
    for(i=0; i<=6; i++){
        cin>>arry[i];
    }

    for(i=0; i<=6; i++){
        cout<<arry[i]<<" ";
    }
}