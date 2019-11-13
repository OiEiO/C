#include <stdio.h>
#define SUM 100
int main() {
    int a[SUM], b[SUM];
    int i, j, n, m;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        m = 0;
        for (j = 0; j < i; j++) {
            if (a[i] > a[j])
                m++;
        }
        b[i] = m;
    }

    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}