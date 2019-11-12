#include <stdio.h>
int main() {
    int i;
    int n, m = 0, x;

    scanf("%d %d", &n, &x);

    for (i = n; i <= n + x - 1; ++i) { // for循环中 ++i 和 i++ 基本一样，没有区别
        if (i % 7 == 6 || i % 7 == 0) {
            continue;
        } else {
            m += 250;
        }
    }

    printf("%d", m);

    return 0;
}