#include <iostream>
using namespace std;

int main() {
	int n, x[50], y[50];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);

	y[0] = (x[0] + x[1] + x[2]) / 3;
	y[n - 1] = (x[n - 3] + x[n - 2] + x[n - 1]) / 3;
	for (int i = 1; i <= n - 2; i++)
		y[i] = (x[i - 1] + x[i] + x[i + 1]) / 3;

	for (int i = 0; i <= n - 1; i++)
		cout << y[i] << ' ';

	return 0;
}