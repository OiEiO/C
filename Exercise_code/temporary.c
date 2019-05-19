#include <math.h>
#include <stdio.h>
#define NO 10
int main() {
    int x[NO], y[NO], r[NO];
    double min;
    int n, i, m = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &x[m], &y[m], &r[m]);
        m++;
    }
    for (i = 0; i < m; i++) {
        min = x[i] * x[i] + y[i] * y[i];
        min = sqrt(min) / 50;
        min = min * 2;
        min = min + r[i] + (r[i] / 2);
    }
    printf("%lf", ceil(min));

    return 0;
}