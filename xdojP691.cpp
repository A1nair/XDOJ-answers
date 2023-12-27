#include <iostream>
using namespace std;

int main() {
    int n, a[40];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n % 2) {
        for (int i = n / 2 + 1; i < n; i++)
            cout << a[i] << ' ';
        cout << a[n / 2] << ' ';
        for (int i = 0; i < n / 2; i++)
            cout << a[i] << ' ';
    }
    else {
        for (int i = n / 2; i < n; i++)
            cout << a[i] << ' ';
        for (int i = 0; i < n / 2; i++)
            cout << a[i] << ' ';
    }

    return 0;
}