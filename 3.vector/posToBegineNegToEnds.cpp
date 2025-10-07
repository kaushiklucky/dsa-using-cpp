#include<iostream>
#include<vector>
using namespace std;

void func(vector<int> &v) {
    int i = 0, j = v.size() - 1;
    
    while (j > i) {
        if (v[i] < 0 && v[j] >= 0) {
            swap(v[i], v[j]);  // Using built-in swap function
            i++;
            j--;
        }
        else if (v[i] >= 0) i++;  // Move right if v[i] is non-negative
        else if (v[j] < 0) j--;   // Move left if v[j] is negative
    }
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

    func(v);

    cout << "Modified vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
