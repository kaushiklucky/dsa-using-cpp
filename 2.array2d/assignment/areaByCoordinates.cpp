#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row size: "; cin>>m;
    cout<<"Enter col size: "; cin>>n;
    int arr[m][n];
    cout<<"Enter elements in array: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int l1, l2, r1, r2;
    cout<<"Enter coordinates of l1: "; cin>>l1;
    cout<<"Enter coordinates of l2: "; cin>>l2;
    cout<<"Enter coordinates of r1: "; cin>>r1;
    cout<<"Enter coordinates of r2: "; cin>>r2;

    int sum=0;

    for(int i = min(l1,l2); i <= max(l1,l2); i++){
        for(int j = min(r1,r2); j <= max(r1,r2); j++){
            sum += arr[i][j];
        }
    }

    cout<<sum;
}