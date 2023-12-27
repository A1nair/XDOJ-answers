#include <iostream>
#include <cmath>

int main() {
    int p[30][2];
    int n;
    int distance1, distance2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &p[i][0], &p[i][1]);

    for (int i = 0; i < n; i++) {
        distance1 = pow(p[i][0] - 4, 2) + pow(p[i][1] - 4, 2);
        distance2 = pow(p[i][0] + 4, 2) + pow(p[i][1] + 4, 2);
        printf("%d ", distance1 < distance2?1:2);
    }
    return 0;
}