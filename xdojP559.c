#include <stdio.h>
#include <math.h>

int homoNum(int x) {
    int cnt = 0, temp = x, power = 1;
    while (temp != 0) {
        temp /= 10;
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
        power *= 10;
    if ((x * x - x) % power == 0)
        return 1;
    return 0;
}

int main() {
    int n;
    int a[10010] = {0}, cnt = 0, temp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < n; i++) {
        if (homoNum(a[i]))
            printf("%d\n", a[i]);
        else
            printf("No\n");
    }
    return 0;
}