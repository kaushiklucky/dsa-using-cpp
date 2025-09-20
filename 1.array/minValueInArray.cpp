#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 0;
    }

    int arr[n];  // Declare array with size n
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
    }

    cout << "The minimum element is: " << mini << endl;
    return 0;
}
