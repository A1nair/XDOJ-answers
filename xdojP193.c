#include <stdio.h>

void bubbleSort(int arr[], int len);
void swap(int *x, int *y);

int main() {
    int n, a[20];
    double ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    bubbleSort(a, n);
    for (int i = 1; i < n - 1; i++) {
        ans += a[i];
    }

    printf("%.2lf", ans / (n - 2));

    return 0;
}

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void swap(int *x,  int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}