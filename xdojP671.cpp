#include <iostream>
int main() {
    int n, x[40], p = 0, xbar = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        xbar += x[i];
    }
    xbar /= n;
    for (int i = 0; i < n; i++) {
        p += (x[i] - xbar) * (x[i] - xbar);
    }

    p /= n;
    printf("%d", p);
    return 0;
}