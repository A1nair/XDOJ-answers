#include <stdio.h>

fun(int x) {
    if ((x >= 'a' &&x <= 'z') ||
        (x >= 'A' &&x <= 'Z'))
        return 1;
    
    return 0;
}

int main() {
    int cnt = 0, c;

    while ((c = getchar()) != EOF)
        if (fun(c))
            cnt++;

    printf("%d", cnt);

    return 0;
}