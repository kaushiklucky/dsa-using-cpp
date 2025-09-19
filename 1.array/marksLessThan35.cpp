#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;
    int marks[n], i;
    cout<<"Enter marks of students: ";
    for(i=0; i<=(n-1); i++){
        cin>>marks[i];
    }

    for(i=0; i<=(n-1); i++){
        if(marks[i]<35){
            cout<<"students index no. "<<i<<" marks less than 35 is "<<marks[i]<<endl;
        }
    }
    
}