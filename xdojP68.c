#include <stdio.h>

int isLeapYear(int x) {
    return (!(x % 4) && (x % 100)) || !(x % 400);
}

int main() {
    int y ,d;
    int month = 1;
    int commonMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int   leapMonths[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d", &y, &d);
    if (isLeapYear(y)) {
        for (int i = 0; d - leapMonths[i] > 0; i++) {
            d -= leapMonths[i];
            month += 1;
        }        
    } else {
        for (int i = 0; d - commonMonths[i] > 0; i++) {
            d -= commonMonths[i];
            month += 1;            
        }
    }

    printf("%d %d", month, d);
}