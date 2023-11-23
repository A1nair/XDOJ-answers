#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[110] = {0}, b[110] = {0};
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]), b[i] = a[i];
    
    int temp = 0;
    for(int i = 0; i < n; i++) {
        while(b[i] > 0) {
            temp += b[i] % 10;
            b[i] /= 10;
        }
        b[i] = temp;
        temp = 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b[ans] < b[i])
            ans = i;
        else if (b[ans] == b[i]) {
            if (a[ans] < a[i])
                ans = i;
        }
    }
    printf("%d", a[ans]);
    return 0;
}