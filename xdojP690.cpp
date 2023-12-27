#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x = 0;

    cin >> n;
    for (int i = n; i <= n*n; i++)
        if (i % 4 == 0 && i % 3 != 0)
            x++;

    if (n % 2) 
        printf("%.0f %.0f %d\n%.0f", (pow(n, 2) - n) / 2 + 1, (pow(n, 2) - n) / 2, x, (pow(n, 2) - n) / 2 + 1 + (pow(n, 2) - n) / 2);
    else
        printf("%.0f %.0f %d\n%.0f", (pow(n, 2) - n) / 2, (pow(n, 2) - n) / 2 + 1, x, (pow(n, 2) - n) / 2 + 1 + (pow(n, 2) - n) / 2);

    return 0;
}