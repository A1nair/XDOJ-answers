#include <iostream>
using namespace std;

int main() {
    int a, b;
    int x = 0, y = 0, z = 0;
    cin >> a >> b;
    if (b < a)
        a ^= b, b ^= a, a ^= b;
    
    for (int i = a; i <= b; i++) {
        if (!(i % 3))
            x++;
        if (!(i % 4))
            y++;
        if (i % 5 == 0 && i % 2 != 0)
            z++;
    }

    cout << x << ' ' << y << ' ' << z << endl << y;
    return 0;
}