#include <iostream>
#include <string>
using namespace std;

int copystr(string s, string* subs, int m) {
    if (m > s.size())
        return 0;
    *subs = s.substr(m - 1);
    return 1;
}

int main() {
    string s, subs;
    int m;

    getline(cin, s);
    cin >> m;

    if (copystr(s, &subs, m))
        cout << subs;
    else
        cout << "error";

    return 0;
}