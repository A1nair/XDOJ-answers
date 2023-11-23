#include <stdio.h>
int main(){
    int  n;

    scanf("%d", &n);
    if (n <= 1e5)
        printf("%d", (int)(n * 0.1));
    else if (1e5 < n && n <= 2e5)
        printf("%d", (int)(10000 + (n - 1e5) * 0.075));
    else if (2e5 < n && n <= 4e5)
        printf("%d", (int)(10000 + 7500 + (n - 2e5) * 0.05));
    else if (4e5 < n && n <= 6e5)
        printf("%d", (int)(10000 + 7500 + 10000 + (n - 4e5) * 0.03));
    else if (6e5 < n && n <= 1e6)
        printf("%d", (int)(10000 + 7500 + 10000 + 6000 + (n - 6e5) * 0.015));
    else if (n > 1e6)
        printf("%d", (int)(10000 + 7500 + 10000 + 6000 + 6000 + (n - 1e6) * 0.01));
}