#include<iostream>
#include<vector>
using namespace std;

void sortZeroOne(vector<int> &vect){
      int noo = 0;
      int noz = 0;
      for(int i=0; i<vect.size(); i++){
            if(vect[i]==0) noz++;
            else noo++;
      }
      for(int i=0; i<vect.size(); i++){
            if(i<noz) vect[i]=0;
            else vect[i] = 1;
      }
}

int main(){
      int n;
      cout<<"Enter size of array : ";
      cin>>n;
      vector<int> vect;
      cout<<"Enter elements in array : ";
      for(int i=0;i<n;i++){
            int q;
            cin>>q;
            vect.push_back(q);
      }
      sortZeroOne(vect);
      for(int i=0;i<vect.size();i++){
            cout<<vect[i]<<" ";
      }
}