#include <stdio.h>
int main() {
    int n;
    double x, y, z;

    scanf("%d", &n);

    if (n > 0 && n <= 150) {
        x = n * 0.4463;
        printf("%.1f", x);
    }
    if (n > 150 && n <= 400) {
        y = (n - 150) * 0.4663 + (150 * 0.4463);
        printf("%.1f", y);
    }
    if (n > 400) {
        z = (n - 400) * 0.5663 + (150 * 0.4463) + (250 * 0.4663);
        printf("%.1f", z);
    }

    return 0;
}