#include <stdio.h>
#include <string.h>

int book[1000];

void sieve(int right) {
    memset(book, 1, sizeof(book));
    book[1] = 0;
    for (int i = 2; i*i <= right; i++) {
        for (int j = 2; j <= right / i; j++) {
            book[i*j] = 0;
        } 
    }
}

int main() {
    int evenNum;

    scanf("%d", &evenNum);

    sieve(evenNum);
    for (int i = 2; i <= evenNum; i++) {
        if (book[i] && book[evenNum - i]) {
            printf("%d %d", i, evenNum - i);
            break;
        }
    }

    return 0;
}