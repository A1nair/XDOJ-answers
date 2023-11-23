#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, ans = 0;
    int *temperature;

    scanf("%d", &n);
    temperature = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &temperature[i]);
    for (int i = 0; i < n - 1; i++) {
        if (abs( temperature[i] - temperature[i+1] ) > ans)
            ans = abs( temperature[i] - temperature[i+1] );
    }

    printf("%d", ans);
    free(temperature);
}