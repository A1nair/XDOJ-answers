#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    for (int i = 2; i * i < x; i++)
        if (x % i == 0)
            return 0;

    return 1;
}

int main() {
    int n, m;
    scanf("%d", &n);

    m = pow(2, n) - 1;
    if (isPrime(m))
        cout << m << " 1";
    else
        cout << m << " 0";

    return 0;
}