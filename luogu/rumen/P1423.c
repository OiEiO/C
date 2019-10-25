/*
#include <math.h>  //公式解
#include <stdio.h>
int main() {
    double x;

    scanf("%lf", &x);

    printf("%.lf", ceil(log(1 - x / 100) / log(0.98)));

    return 0;
}
*/
#include <stdio.h>
int main() {
    int i = 0;
    double x, n = 2, m = 0;

    scanf("%lf", &x);

    while (m < x) {
        m += n;
        n *= 0.98;
        i++;
    }

    printf("%d", i);

    return 0;
}