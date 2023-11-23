#include <stdio.h>

int divisorSum(int x) {
    int sum = 0;
    for(int i = 1; i < x / 2 + 1; i++)
        if(!(x % i))
            sum += i;

    return sum;
}

int divisorStat(int x) {
    int stat = 0;
    for(int i = 1; i < x / 2 + 1; i++)
        if(!(x % i))
            stat++;

    return stat;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    if (divisorSum(n) == m && divisorSum(m) == n)
        printf("yes ");
    else
        printf("no ");
        
    printf("%d %d", divisorStat(n), divisorStat(m));

    return 0;
}