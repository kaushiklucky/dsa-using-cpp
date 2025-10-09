#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }cout<<endl;
}
void reversePart(int i, int j, vector<int>& vect){
    while(i<=j){
        int temp = vect[i];
        vect[i] = vect[j];
        vect[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int m;
    cout<<"Enter array size: ";
    cin>>m;
    vector<int> vect;
    cout<<"Enter array element: ";
    for(int i=0; i<m; i++){
        int x; cin>>x;
        vect.push_back(x);
    }
    cout<<"Enter the number array to be rotated for array size "<<m<<": ";
    int k; cin>>k;

    int n = vect.size();

    if(k>n) k = k%n;

    reversePart(0, n-k-1, vect);
    reversePart(n-k, n-1, vect);
    reversePart(0, n-1,vect);
    cout<<"Rotated array: ";
    display(vect);

}