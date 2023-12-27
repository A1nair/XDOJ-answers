#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> a;
    int n, m, temp;

    cin >> n >> m;

    for (int i = 0; i < pow(2, n); i++) {
        cin >> temp;
        a.push_back(temp);
    }

    for (int k = 0; k < m; k++) {
        int size = a.size();
        for (int i = 0; i < size / 2; i++) {
            a[i] += a[size - i - 1];
        }
        a.resize(size / 2);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }

    return 0;
}