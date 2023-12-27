#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
        if ('a' <= s[i] && s[i] <= 'z')
            s[i] = (s[i] + 13 - 'a' + 1) % 26 + 'a' - 1;
        else if ('A' <= s[i] && s[i] <= 'Z')
            s[i] = (s[i] + 13 - 'A' + 1) % 26 + 'A' - 1;

    cout << s;
}