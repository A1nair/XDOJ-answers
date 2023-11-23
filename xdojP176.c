#include <stdio.h>

void bubbleSort(int arr[], int len);
void swap(int *x,  int *y);
int midNum(int arr[],int i);
int n;

int main() {
    int a[1010];
    int cnt = 0;
    int temp = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubbleSort(a, n);

    for (int i = 0; i < n; i++) {
        if(midNum(a, i)) {
            if (a[i] != temp)
                printf("%d ", a[i]);
            cnt++;
            break;
        }
    }

    if (!cnt)
        printf("-1");

    return 0;
}

void swap(int *x,  int *y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}


int midNum(int arr[],int i) {//to check whether arr[i] is a midnumber
    int bigger = 0, smaller = 0;
    for (int j = 0; j < n; j++) {
        if (arr[i] > arr[j])
            smaller++;
        if (arr[i] < arr[j])
            bigger++;
    }
    
        if (bigger == 0 && smaller == 0)
            return -1;
        return bigger == smaller;
}