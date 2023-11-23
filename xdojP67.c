#include <stdio.h>
int main() {
    int n, k, a[110];
    int temp = -1;
    scanf("%d%d", &n, &k);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        if(a[i] == k) {
            temp = i;
            if(temp != -1)
                printf("%d ", temp);
        }
    
    if(temp == -1)
        printf("%d", temp);

    return 0;
}