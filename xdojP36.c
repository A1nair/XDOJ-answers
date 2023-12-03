#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int num[20][20] = {0};
    int sum[21 * 21] = {0};
    int m, cnt = 0;

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &num[i][j]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            sum[cnt] += num[i][j];
        }
        cnt++;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            sum[cnt] += num[j][i];
        }
        cnt++;
    }

    for (int i = 0; i < m; i++)
        sum[cnt] += num[i][i];
    
    for (int i = 0; i <= m; i++)
        sum[cnt + 1] += num[i][m - 1 -i];

    bubbleSort(sum, cnt + 2);

    for (int i = 0; i <= cnt + 1; i++)
        printf("%d ", sum[i]);

    return 0;
}