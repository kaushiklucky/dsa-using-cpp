#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rearrange(vector<int> &v) {
    sort(v.begin(), v.end(), [](int a, int b) {
        if (a < 0 && b < 0) return a < b;  // Smaller negative values later
        if (a > 0 && b > 0) return a < b;  // Smaller positive values first
        return a < b;  // Keep negatives before zero, zero before positives
    });
}

int main() {
    int n;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    rearrange(v);

    cout << "Rearranged vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
