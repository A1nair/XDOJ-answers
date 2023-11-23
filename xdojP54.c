#include <stdio.h>

int main() {
    int n;
    int a, b, c;
    scanf("%d", &n);
    for (a = 0; a <= 9; a++)
        for (b = 0; b <= 9; b++)
            for (c = 0; c <= 9; c++)
                if (101 * a + 20 * b + 101 * c == n)
                    printf("%d %d %d\n", a, b, c);

    return 0;
}