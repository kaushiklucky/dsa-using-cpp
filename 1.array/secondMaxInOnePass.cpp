#include <iostream>
#include <climits>
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

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        cout << "No second largest element exists" << endl;
    } else {
        cout << "The second largest element is: " << max2 << endl;
    }

    return 0;
}
