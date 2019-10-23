#include <stdio.h>
int main() {
    int n, i = 1;
    int a1, a2, a3, b1, b2, b3; // x = 0, y = 0, z = 0;
    int c[3], m = 0;

    scanf("%d", &n);
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    scanf("%d %d", &a3, &b3);

    /* while (x < n) { //未能全部通过测试
        i++;
        x = a1 * i;
    }
    c[0] = i * b1;
    i = 1;
    while (y < n) {
        i++;
        y = a2 * i;
    }
    c[1] = b2 * i;
    i = 1;
    while (z < n) {
        i++;
        z = a3 * i;
    }
    c[2] = b3 * i;

    m = c[0]; */

    c[0] = n / a1;
    a1 = n % a1 == 0 ? c[0] : c[0] + 1;
    c[0] = a1 * b1;

    c[1] = n / a2;
    a2 = n % a2 == 0 ? c[1] : c[1] + 1;
    c[1] = a2 * b2;

    c[2] = n / a3;
    a3 = n % a3 == 0 ? c[2] : c[2] + 1;
    c[2] = a3 * b3;

    m = c[0];
    for (i = 1; i < 3; i++) {
        if (c[i] < m)
            m = c[i];
    }

    printf("%d", m);

    return 0;
}