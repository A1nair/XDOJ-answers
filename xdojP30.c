#include <stdio.h>

int isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i + n / i;
        }
    }
    if (sum == n * 2)
        return 1;
    else
        return 0;
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i != 1)
            if (isPerfectNumber(i))
                printf("%d\n", i);
    }

    return 0;
}