#include <stdio.h>
int f(int n);
int sum = 0;

int main() {
    int n;
    int ans;
    scanf("%d", &n);
    ans = f(n);

    printf("%d", ans);
}

int f(int n) {
    if (n % 2 && n != 1)
        n = n * 3 + 1;
    else
        n /= 2;
    sum += 1;
    if (n != 1)
        return f(n);
    return sum;
}