#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;

    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '*')
            s[i] = '\0';

    //s.erase(remove(s.begin(), s.end(), '*'), s.end());
    sort(s.begin(), s.end());
    cout << s;
}