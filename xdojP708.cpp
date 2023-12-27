#include <iostream>
#include <cmath>
using namespace std;

int f(int x) {
    return 3 * pow((x - 1), 2) + 2 * (x - 1) + 1;
}

int main() {
    int sumEven = 0, sumOdd = 0;
    int m;
    int n = 1;

    cin >> m;

    for (int i = 1; i <= m; n++) {
        if (f(n) > 100 && !(f(n)%2))
            sumEven += f(n), i++;
    }

    n = 1;

    for (int i = 1; i <= m - 1; n++) {
        if (f(n) > 100 && f(n)%2)
            sumOdd += f(n), i++;
    }

    cout << sumEven << ' ' << sumOdd;

    return 0;
}