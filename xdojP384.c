#include <stdio.h>

int main() {
    int n, t, min, ans;

    scanf("%d%d", &n, &t);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t += a[i];
    }

    min = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            ans = i + 1;
        }
    }
    if (ans == 0)
        printf("%d 1", t);
    else 
        printf("%d %d", t, ans);
}