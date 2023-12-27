#include <iostream>
#include <cmath>

int f(int x) {
    if (x == 0)
        return 1;
    else
        return x * f(x - 1);
}
int main() {
    int n;
    double x, sinx = 0;
    scanf("%d%lf", &n, &x);

    for (int i = 1; i <= n; i++) {
        sinx += pow(x, 2*i - 1) / f((2*i - 1)) * pow(-1, i + 1);
    }

    printf("%.4lf", sinx);
}