#include <stdio.h>

int main(){
    int fahr;
    scanf("%d", &fahr);
    printf("%.2f", (fahr - 32.0) * 5.0 / 9.0);
}