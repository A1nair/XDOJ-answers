#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num) {
    char *str = (char*)malloc(11 * sizeof(char));
    sprintf(str, "%d", num);

    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            free(str);
            return 0;
        }
        left++;
        right--;
    }

    free(str);
    return 1;
}

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;

    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d",sumDigits(n));
    } else{
        printf("no");
    }

    return 0;
}