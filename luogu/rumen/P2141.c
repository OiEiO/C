// own
/* #include <stdio.h>
int main() {
    int a[105];
    int i, j, k, n, m, x = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n; j++) {
            m = a[i] + a[j];
            for (k = 0; k < n; k++) {
                if (m == a[k])
                    x++;
            }
        }
    }

    printf("%d", x);

    return 0;
} */

//做标记的方法
#include <stdio.h>
#define MAX 20005
int main() {
    int a[105];
    int x[MAX] = {0}, y[MAX] = {0}, z = 0;
    int i, j, n, m = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        x[a[i]] = 1;
    }

    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n; j++) {
            y[a[i] + a[j]]++;
            if ((a[i] + a[j]) > z)
                z = a[i] + a[j];
        }
    }

    for (i = 0; i < z; i++) {
        if (y[i] > 0 && x[i])
            m++;
    }

    printf("%d", m);

    return 0;
}