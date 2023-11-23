#include <stdio.h>

int numberRoot(int n) {
    int root;
    while (n != 0) {
        root += n % 10;
        n /= 10;
    }
    if (root < 10)
        return root;
    else
        return numberRoot(root);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", numberRoot(n));
}