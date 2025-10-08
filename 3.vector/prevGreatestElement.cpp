#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> v1; // To store the results
    int maxSoFar = -1; // Keeps track of the maximum element encountered so far

    for (int i = 0; i < v.size(); i++) {
        maxSoFar = max(maxSoFar, v[i]); // Update the maximum so far
        v1.push_back(maxSoFar);
    }

    cout << "Output: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}
