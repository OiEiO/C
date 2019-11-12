#include <stdio.h>
int main() {
    int i, j = 0;

    int n, x, y, z;

    scanf("%d %d", &n, &x);

    for (i = 1; i <= n; i++) {
        y = i;
        while (y > 0) {
            z = y % 10;
            if (x == z) {
                j++;
            }
            y = y / 10;
        }
    }

    printf("%d", j);

    return 0;
}