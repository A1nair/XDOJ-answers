#include <iostream>
using namespace std;

struct num {
    int no, value;
};

int main() {
    int n, x[60], sum = 0;
    struct num max, min;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i], sum += x[i];

    max.no = min.no = 1;
    max.value = min.value = x[0];

    for (int i = 1; i < n; i++) {
        if (x[i] > max.value)
            max.value = x[i], max.no = i + 1;
        if (x[i] < min.value)
            min.value = x[i], min.no = i + 1;
    }

    printf("%d %d %d %d %d", sum, max.value, max.no, min.value, min.no);
    return 0;
}