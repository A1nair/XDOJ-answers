#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[30], n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
        cin >> arr[i];
    sort(arr, arr + n + 1);
    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << ' ';
    return 0;
}