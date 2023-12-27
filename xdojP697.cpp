#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s, t, ans;

    cin >> s >> t;
    if (s <= 3)
        ans = 10 + 2*floor(t/5);
    else if (s <= 10)
        ans = 10 + (s - 3) * 2 + 2*floor(t/5);
    else
        ans = 10 + (s - 3) * 2 + 2*floor(t/5) + (s - 10);

    printf("%.1lf", ans);

    return 0;
}