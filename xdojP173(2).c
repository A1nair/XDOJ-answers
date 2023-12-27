#include <stdio.h>
#include <string.h>

int main() {
    int seat[6][21] = {0};//deafult: No one sat
    int n, p[101], rest[22];
    int flag, cnt, temp;
    for (int i = 0; i < 22; i++)
        rest[i] = 5;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        flag = 0, cnt = 0;

        for (int j = 1; j < 22; j++) {
            if (rest[j] >= p[i]) {
                temp = rest[j];
                for (int k = 5 * j + 1 - temp; k < 5 * j + 1 - temp + p[i]; k++) {
                    printf("%d ", k);
                    rest[j]--;
                }
                printf("\n");
                flag = 1;
            }
            if (flag == 1)
                break;
        }
        if (flag == 0) {
            for (int j = 1; j < 21; j++) {
                while (rest[j] != 0) {
                    temp = rest[j];
                    printf("%d", 5 * j + 1 - temp);
                    rest[j]--;
                    cnt++;
                }
                if (cnt == p[i])
                    break;
            }
        }
    }
    

    return 0;
}