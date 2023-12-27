#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int n, a[110], copy[110];
    int maxDiff, minDiff;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    memcpy(copy, a, n * sizeof(int));
    sort(a, a + n);

    maxDiff = minDiff = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i-1] > maxDiff)
            maxDiff = a[i] - a[i - 1];
        if (a[i] - a[i-1] < minDiff)
            minDiff = a[i] - a[i - 1];
    }
    if (maxDiff == minDiff)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                if (a[i] == copy[j])
                    cout << j + 1 << ' ';
            }
    else
        cout << maxDiff << ' ' << minDiff;

    return 0;
}