#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, a[110], b[110], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n-1; i++) {
        b[i] = a[i] * a[i + 1] / __gcd(a[i], a[i + 1]);
        ans += b[i];
    }
    cout << ans;

    return 0;
}