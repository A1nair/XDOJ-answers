#include <stdio.h>

int isPrime(int x) {
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0)
            return 0;
    }

    return 1;
}
int main() {
    int n;
    int f1 = 1, f2 = 1;

    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        f2 += f1;
        f1 = f2 - f1;
    }

    if(isPrime(f2))
        printf("yes");
    else
        printf("%d", f2);

    return 0;
}