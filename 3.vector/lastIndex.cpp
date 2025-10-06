#include<iostream>
#include<vector>
using namespace std;

int main(){
      vector<int> v;
      v.push_back(9);
      v.push_back(2);
      v.push_back(4);
      v.push_back(8);
      v.push_back(1);
      v.push_back(2);
      v.push_back(4);
      v.push_back(7);

      //SEARCHING FROM FIRST
      int x = 2;
      int idx = -1;
      for(int i=0; i<v.size(); i++){
            if(v[i]==x) idx = i;
      }
      cout<<idx;
      cout<<endl;
      //SEARCHING FROM LAST
      x = 4;
      idx = -1;
      for(int i=v.size()-1; i>=0; i--){
            if(v[i]==x){
                  idx = i;
                  break;
            }
      }
      cout<<idx;


}