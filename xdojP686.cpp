#include <iostream>
using namespace std;

int digits(int x) {
    int sum = 0;

    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main() {
    int n, x[100010], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum += digits(x[i]);
    }

    printf("%d", sum % 10);

    return 0;
}