#include <stdio.h>

int main() {
    int a[100005];
    int i = 0, n;
    long long m = 0;
    int t1 = 0, t3 = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t3 += a[i] == 3;
    }

    for (i = 0; i < n; i++) {
        t1 += a[i] == 1;
        t3 -= a[i] == 3;
        m += (a[i] == 2) * (t1 * t3);
    }

    printf("%lld", m);

    return 0;
}