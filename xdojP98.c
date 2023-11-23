#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (!(n % 2) && (n % 3) && (n % 5))
		printf("Nice");
	else if ((n % 2) && !(n % 3) && (n % 5))
		printf("Good");
	else if ((n % 2) && (n % 3) && !(n % 5))
		printf("Best");
	else
		printf("Bad");

	return 0;
}