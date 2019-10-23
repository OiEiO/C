#include <stdio.h>
int main() {
    double s = 1, n = 2;
    int k;

    scanf("%d", &k);

    while (k > s) {
        s += (1 / n);
        n++;
    }

    printf("%.lf", n);

    return 0;
}