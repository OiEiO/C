#include <stdio.h>
int main() {
    int a[5];
    int i = 0, j, n, x;

    scanf("%d", &n);

    for (i = 0;; i++) {
        x = n % 10;
        a[i] = x;
        n = n / 10;
        if (n == 0)
            break;
    }

    printf("%d\n", i + 1);
    for (j = i; j >= 0; j--) {
        printf("%d ", a[j]);
    }
    printf("\n");
    for (j = 0; j <= i; j++) {
        printf("%d", a[j]);
    }

    return 0;
}