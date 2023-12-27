#include <iostream>

double p(int n, double x) {
    if (n <= 0)
        return 1;
    else
        return ((2*n-1)*x*p(n-1, x) - (n-1)*p(n-2, x)) / n;
}

int main() {
    int n;
    double x, sum = 0;
    scanf("%d%lf", &n, &x);
    for (int i = 1; i <= n; i++)
        sum += p(i, x);

    printf("%.4lf", sum);

    return 0;
}