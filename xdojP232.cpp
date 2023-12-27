#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;
    for (auto it = s.begin(); it != s.end(); it++)
        if (*it != s[s.end() - it - 1]) {
            cout << "no";
            return 0;
        }

    cout << "yes";
    return 0;
}