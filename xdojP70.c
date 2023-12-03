#include <stdio.h>

int main() {
    int a[100][100];
    int n;
    int state = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    /*
    scan process:
    1. Start from the top left corner;
    2. End in the bottom right corner;

    Judgment basis:
    0. To the left down position:
        while (i + 1 < n && j - 1 >= 0)
            i + 1, j - 1;
        i + 1.

    1. To the right up position:
        while (i - 1 >= 0 && j + 1 < n)
            i - 1, j + 1;
        j + 1.
    */

    int i = 0, j = 0;
    printf("%d ", a[i][j]);
    j++;
    printf("%d ", a[i][j]);
   
    while (!(i == n - 1 && j == n - 2) && i < n && j < n) {
        if (state) {
            do {
                if (i - 1 >= 0 && j + 1 < n) {
                    i--, j++;
                    printf("%d ", a[i][j]);
                }
                else
                    break;
            } while (i >= 0 && j + 1 < n);
            if (j + 1 < n)
                j++;
            else
                i++;
            if (i < n && j < n)
                printf("%d ", a[i][j]);
            state = 0;
        }
        else {
            do {
                if (i + 1 < n && j - 1 >= 0) {
                    i++, j--;
                    printf("%d ", a[i][j]);
                }
                else
                    break;
            } while (i + 1 < n && j >= 0);
            if (i + 1 < n)
                i++;
            else
                j++;
            if (i < n && j < n)
                printf("%d ", a[i][j]);
            state = 1;
        }
    }

    return 0;
}