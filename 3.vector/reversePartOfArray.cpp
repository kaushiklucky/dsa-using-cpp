#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vect){
      for(int i=0; i<vect.size(); i++){
            cout<<vect[i]<<" ";
      }
      cout<<endl;
}
void reversePart(int i, int j, vector<int> &vect){
      while(i<=j){
            int temp = vect[i];
            vect[i] = vect[j];
            vect[j] = temp;
            i++;
            j--;
      }
      return;
}

int main(){
      int n;
      vector<int> vect;

      cout << "Enter array size: ";
      cin >> n;

      cout << "Enter array elements: ";
      for (int i = 0; i < n; i++){
            int q;
            cin >> q;
            vect.push_back(q);
      }

      int x,y;
      cout<<"Reverse the no. from interval ";cin>>x;
      cout<<" to "; cin>>y;
      reversePart(x,y,vect);

      display(vect);    

}