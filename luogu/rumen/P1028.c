#include <stdio.h>
int main() {
    int i, j, n;
    int a[1005] = {0};

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i / 2; j++) {
            a[i] += a[j];
        }
        a[i]++;
    }

    printf("%d", a[n]);
    return 0;
}