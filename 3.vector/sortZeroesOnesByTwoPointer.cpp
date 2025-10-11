#include<iostream>
#include<vector>
using namespace std;
int main(){
      int n;
      cout<<"Enter array size :";
      cin>>n;
      vector<int> v;
      cout<<"Enter elements : ";
      for(int i=0;i<n;i++){
            int q;
            cin>>q;
            v.push_back(q);
      }

      for(int i=0; i<n; i++){cout<<v[i]<<" ";}

      int i=0;
      int j=n-1;
      while(i<j){
            if(v[j]==i) j--;
            if(v[i]==0) i++;
            if(v[i]==1 && v[j]==0){
                  int temp = v[i];
                  v[i] = v[j];
                  v[j] = v[i];
                  i++;
                  j--;
            }
      }

      for(int i=0; i<n; i++){cout<<v[i]<<" ";}

} 