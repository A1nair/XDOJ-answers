#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, subs;
    int pos;

    getline(cin, s);
    getline(cin ,subs);
    pos = s.find(subs);

    if (pos != -1)
        cout << pos + 1;
    else
        cout << "No!";

    return 0;
}