#include <stdio.h>
int main(){
    double PI = 3.1415926, rho1 = 7.86, rho2 = 19.3;
    double d1, d2;
    double m1, m2;

    scanf("%lf%lf", &d1, &d2);
    d1 /= 20;
    d2 /= 20;
    m1 = 4.0 / 3.0 * PI * d1*d1*d1 * rho1;
    m2 = 4.0 / 3.0 * PI * d2*d2*d2 * rho2;
    printf("%.3lf %.3lf", m1, m2);

    return 0;
}
