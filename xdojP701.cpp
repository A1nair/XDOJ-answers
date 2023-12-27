#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, ans = 0;
    double x[110], s = 0, xbar = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i], xbar += x[i];
    xbar /= n;

    for (int i = 0; i < n; i++)
        s += pow(x[i] - xbar, 2);

    s = sqrt(s / (n - 1));
    for (int i = 0; i < n; i++)
        if (xbar - 3*s > x[i] || x[i] > xbar + 3*s)
            ans++;

    printf("%.4lf %d", s, ans);
    return 0;
}