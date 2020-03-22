#include <stdio.h>
#define N 100
int main() {
    int i, n;
    int a[N] = {1, 1};

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        a[i] = (a[i - 1] + a[i - 2]) % 10007;
    }

    printf("%d", a[n - 1]);

    return 0;
}