#include <iostream>
using namespace std;

int main() {
    int n, a[1010];
    int ans = 1, temp = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        if (a[i] == a[i - 1]) {
            temp++;
            if (temp > ans)
                ans = temp;
        } else
            temp = 1;

    cout << ans;
    return 0;
}