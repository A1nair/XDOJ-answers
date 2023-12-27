#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2)
        cout << (n+1)*(n+1)/4 << ' ' << (n+1)*(n-1)/4;
    else
        cout << n*n/4 << ' ' << n*(n+2)/4;

    return 0;
}