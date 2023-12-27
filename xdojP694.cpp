#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, m, k;
    int x = 0, y = 0, z = 0;
    cin >> m >> k;

    for (int i = 1; i <= k; i++) {
        switch (i)
        {
        case 1:
            a = 2;
            break;
        case 2:
            a = 3;
            break;
        default:
            a = pow(i-1, 2) + 3 * (i - 2) + 1;
            break;
        }
        if (a % m == 0) x++;
        if (a % m == 1) y++;
        if (a % m > 1) z++;
    }

    cout << x << ' ' << y << ' ' << z;

    return 0;
}