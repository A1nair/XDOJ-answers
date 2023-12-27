#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, r, temp;
    double xn;
    int times = 0;
    cin >> x1 >> r;
    do {
        temp = x1;
        xn = r * x1 * (1 - x1);
        x1 = xn;
        times++;
    } while (abs(xn-temp) >= 1e-5 && times <= 1000);
    if (times ==  1001)
        times--;

    printf("%.4lf %d", xn, times==1000?0:1);
    return 0;
}