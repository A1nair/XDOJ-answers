#include <iostream>
using namespace std;

struct num{
    int times, value;
};

int main() {
    int n, s[1010];
    int hash[10001] = {0};
    struct num max = {0, 0};
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        hash[s[i]]++;

    for (int i = 0; i < 10001; i++) {
        if (hash[i] > max.times || (hash[i] == max.times && i < max.value) )
            max.times = hash[i], max.value = i;
    }

    printf("%d", max.value);

    return 0;
}