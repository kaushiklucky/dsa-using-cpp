#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = false;

    for (int i = 0; i < n; i++) {
      for( int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                  flag = true;
                  cout<<arr[i];
                  break;
            }
      }
    }
    if(flag==false) cout<<"No duplicate";
    return 0;
}
