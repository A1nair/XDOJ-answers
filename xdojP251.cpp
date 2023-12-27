#include <iostream>
using namespace std;

struct date {
    int y, m, d;
};

bool isLeapYear(int y) {
    return ((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0;
}

int main() {
    struct date dt;
    int ans = 0;
    int dinm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d,%d,%d", &dt.y, &dt.m, &dt.d);

    for (int i = 1; i < dt.m; i++)
        ans += dinm[i];

    ans += dt.d;

    if (isLeapYear(dt.y))
        if (dt.m > 2 || (dt.m == 2 && dt.d == 29))
            ans++;

    cout << ans;

    return 0;
}