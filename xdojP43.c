#include <stdio.h>

int main() {
    int n;
    int sum = 0, max = 0, min = 9;

    while ((n = getchar()) != EOF) {
        sum++;
        if ((n - 48) > max)
            max = n - 48;
        if ((n - 48) < min)
            min = n - 48;
    }

    printf("%d %d %d", sum, max, min);
}