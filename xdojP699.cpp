#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n, score[30];
    int maxn, maxi, minn, mini;
    float average;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> score[i];

    maxn = *max_element(score, score + n);
    minn = *min_element(score, score + n);

    for (int i = 0; i < n; i++)
        average += score[i];
    if (maxn == score[m - 1]) {
        average -= minn;
        printf("%.2f", average / (n - 1));
    } else if (minn == score[m - 1]) {
        average -= maxn;
        printf("%.2f", average / (n - 1));
    } else {
        average -= maxn + minn;
        printf("%.2f", average / (n - 2));
    }

    return 0;
}