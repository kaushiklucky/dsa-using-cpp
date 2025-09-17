#include <iostream>
using namespace std;

void del(int array[], int &n, int pos) {
      int j, item;
      item=array[pos];
      for(int j=pos; j<n; j++){
            array[j]=array[j+1];
      }
      n--;
      cout<<"new array "<<" ";
      for(int i=0; i<n; i++){
            cout<<array[i]<<" ";
      }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int array[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int pos, num;
    cout << "Enter position in array for deletion: ";
    cin >> pos;

    del(array, n, pos);

    return 0;
}
