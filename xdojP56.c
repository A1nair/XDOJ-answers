#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a * a + b * b == c * c )
        printf("%d", a * b);
    else
        printf("no");
}