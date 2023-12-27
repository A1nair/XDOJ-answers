#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, m;
    int times = 0, pos;
    cin >> m >> s;

    pos = s.find(m);
    while (pos != -1) {
        times++;
        pos = s.find(m, pos + 1);
    }

    printf("%d", times);
    return 0;
}