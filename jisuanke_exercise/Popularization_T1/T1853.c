#include <stdio.h>
int main() {
    int a[50001], z; //[50001];
    int i, j, k = 0, n, w = 0, m = 0, y = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        w = 0;
        m = 0;
        for (j = i; j < n; j++) {
            if (a[j] == 0) {
                w++;
            }
            if (a[j] == 1) {
                m++;
            }
            if (w == m) {
                z = w + m;
                if (z > y)
                    y = z;
                k++;
            }
        }
    }

    /* y = z[0];
    for (i = 1; i <= k; i++) {

        if (z[i] > y)
            y = z[i];
    } */

    printf("%d", y);

    return 0;
}