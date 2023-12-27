#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, max = -10000.0;
    scanf("%lf", &a);

    for (double i = 0; i <= 10; i += 0.0001)
        if (-pow(i, 3) + a*pow(i, 2) > max)
            max = -pow(i, 3) + a*pow(i, 2);

    printf("%.2lf", max);
    return 0;
}