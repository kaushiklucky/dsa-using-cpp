#include <iostream>
using namespace std;

void insert(int array[], int &n, int num, int pos) {
    if(pos > n || pos < 0) {
        cout << "Insertion outside the array" << endl;
        return;
    }
    for(int i = n; i >= pos; i--) {
        array[i] = array[i-1];
    }
    array[pos] = num;
    n++;
    cout << "New array: ";
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int array[n + 1]; // Make room for one additional element
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int pos, num;
    cout << "Enter number to be inserted: ";
    cin >> num;
    cout << "Enter position in array for insertion: ";
    cin >> pos;

    insert(array, n, num, pos);

    return 0;
}
