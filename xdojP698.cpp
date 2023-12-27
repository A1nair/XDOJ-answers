#include <iostream>
using namespace std;

int main() {
    int a[500], n;
    int temp, flag = 3, point = 2;
    cin >> a[1] >> a[2] >> n;
    while (flag <= n) {
        temp = a[point] * a[point - 1];
        if (temp >= 10) {
            a[flag] = temp / 10;
            a[flag + 1] = temp % 10;
            flag += 2;
        }
        else
            a[flag] = temp, flag++;

        point++;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';

    return 0;
}