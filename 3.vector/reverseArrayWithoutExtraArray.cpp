#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> &vect){
      for(int i=0; i<vect.size(); i++){
            cout<<vect[i]<<" ";
      }
      cout<<endl;
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

      cout << "Original array: ";
      display(vect);

      int i=0;
      int j=vect.size()-1;
      while(i<j){         // Swapping elements at positions i and j without using an extra variable
            vect[i] = vect[i] + vect[j]; //you did i=i+j
            vect[j] = vect[i] - vect[j]; //        j=i-j
            vect[i] = vect[i] - vect[j]; //        i=i-j
            i++;
            j--;
      }
      cout << "Reversed array by while loop: ";
      display(vect);

      // Re-reverse the array using for loop to restore original array
      for(int i=0,j=vect.size()-1; i<=j; i++,j--){
            int temp = vect[i];
            vect[i] = vect[j];
            vect[j] = temp;
      }
      cout << "Restored original array by for loop: ";
      display(vect);

      // Reverse the array again using for loop
      for (int i = 0, j = vect.size() - 1; i < j; i++, j--) {
        vect[i] = vect[i] + vect[j];
        vect[j] = vect[i] - vect[j];
        vect[i] = vect[i] - vect[j];
      }
    cout << "Reversed array again by for loop: ";
    display(vect);

//     reverse(vect.begin(),vect.end());
//     cout << "Reversed array again by built in function: ";
//     display(vect);

}