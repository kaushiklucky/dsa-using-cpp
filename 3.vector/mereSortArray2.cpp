#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&arr1, vector<int>&arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n+m);
    int i=n-1; // arr1
    int j=m-1; //arr2
    int k=n+m-1; //res
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            res[k] = arr1[i];
            i--;
        }
        else{
            res[k] = arr2[j];
            j--;
        }
        k--;
    }
    // for remainig
    if(i==n){ // arr1 ke saare elements utha chuka hoon
        while(j<=0){
            res[k] = arr2[j];
            k--;
            j--;
        }
    }
    if(j==m){ // arr2 ke elements utha chuke hai
        while(i<=0){
            res[k] = arr1[i];
            k--;
            i--;
        }
    }
    return res;
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    vector<int> res = merge(arr1, arr2);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}