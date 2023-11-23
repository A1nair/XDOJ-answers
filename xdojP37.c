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

int main() {
    int n;
    int oddCnt = 0, evenCnt = 0;
    int num[110], oddNum[110], evenNum[110];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < n; i++) {
        if (num[i] % 2) {
            oddNum[oddCnt] = num[i];
            oddCnt++;
        } else {
            evenNum[evenCnt] = num[i];
            evenCnt++;
        }
    }

    bubbleSort(oddNum, oddCnt);
    bubbleSort(evenNum, evenCnt);

    for (int i = 0; i < evenCnt; i++)
        printf("%d ", evenNum[i]);
    for (int i = 0; i < oddCnt; i++)
        printf("%d ", oddNum[i]);

    return 0;
}