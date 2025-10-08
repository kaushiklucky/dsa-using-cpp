#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> vect;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        vect.push_back(q);
    }

    vector<int> vect2(vect.size());

    // Reversing the array
    for (int i = 0; i < n; i++) {
        vect2[i] = vect[n - i - 1];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << vect2[i] << " ";
    }
    cout << endl;

    return 0;
}
