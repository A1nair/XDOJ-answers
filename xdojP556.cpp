#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
    string s;
    int j = 0, flag = 0;
    vector<string> num;
    cin >> s;

    num.resize(15);
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]))
            num[j] += s[i];
        else if (!num[j].empty())
            j++;
    }

    for (int i = 0; i <= j; i++) {
        flag = 0;
        for (int k = 1; k < num[i].size(); k++) {
            if (abs(num[i][k - 1] - num[i][k]) != 1) {
                flag = 1;
                break;
            }
        }
        if (!flag || num[i].size() == 1) {
            cout << num[i] << endl;
        }
    }

    return 0;
}