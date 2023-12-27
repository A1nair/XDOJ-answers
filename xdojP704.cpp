#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;
    int sum = 0, times = 0;

    cin >> c;

    for (int i = 0; i < c.size(); i++) {
        if ('0' <= c[i] && c[i] <= '9')
            sum += c[i] - '0', times++;
        else if ('a' <= c[i] && c[i] <= 'f')
            sum += c[i] - 'a' + 10, times++;
        else if ('A' <= c[i] && c[i] <= 'F')
            sum += c[i] - 'A' + 10, times++;
    }

    if (times > 0)
        cout << sum;
    else
        cout << "NO";

    return 0;
}