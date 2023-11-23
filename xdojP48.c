#include <stdio.h>
int main(){
    int m, n, q, r;
    scanf("%d%d%d%d", &m, &n ,&q, &r);

    if (n * q + r == m)
        printf("yes");
    else
        printf("%d %d", m / n, m % n);
}