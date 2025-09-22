#include <iostream>
using namespace std;

int main() {
    cout << "Enter 5 elements of the sorted array:" << endl;
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int x = 1; // Start with the smallest positive integer
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (a[i] != x) {
            found = true;
            break;
        }
        x++;
    }

    // Print the result
    cout << "The smallest missing positive element is: " << x << endl;

    return 0;
}
