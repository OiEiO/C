#include <stdio.h>
int main() {
    double s = 1, n = 2, m = 0;
    int k;

    scanf("%d", &k);

    while (k >= s) {
        m = 1 / n;
        s += m;
        n++;
    }

    printf("%.lf", n - 1);

    return 0;
}