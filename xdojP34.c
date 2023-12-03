int function(int a, int b) {
    int n = 0, ans = 0;
    int temp, sum = 0;

    if (a > b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for (int i = a; i <= b; i++) {
        temp = i;

        while (temp) {
            temp /= 10;
            n++;
        }

        temp = i;

        while (temp) {
            sum += pow(temp % 10, n);
            temp /= 10;
        }

        if (sum == i && n >= 3) {
            ans++;
        }

        n = 0;
        sum = 0;
    }

    return ans;
}