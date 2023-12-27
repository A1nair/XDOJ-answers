#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> signal;
    int n;
    int times = 0;

    cin >> n;
    signal.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> signal[i];
    }

    for (int i = 0; i < n - 2; i++) {
        if (signal[i] == 3 && signal[i + 1] == 5 && signal[i + 2] == 7) {
            times++;
        }
    }

    cout << times;

    return 0;
}