#include <iostream>

int main() {
    int n, a[40], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < n - 2; i++)
        if (a[i] + a[i + 1] > a[i + 2] &&
            a[i] + a[i + 2] > a[i + 1] &&
            a[i + 1] + a[i + 2] > a[i])
            sum++;

    printf("%d", sum);
    return 0;
}