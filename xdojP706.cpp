#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string s, subs;
    int n;

    cin >> s >> subs >> n;

    s.insert(n, subs);

    cout << s;
    return 0;
}