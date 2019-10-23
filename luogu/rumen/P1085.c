#include <stdio.h>
int main() {
    int a[14];
    int i, n;

    for (i = 0; i < 14; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 14; i += 2) {
        n = 0;
        n = a[i] + a[i + 1];
        if (n > 8) {
            n = (i + 2) / 2;
            break;
        } else {
            n = 0;
        }
    }

    printf("%d", n);
    return 0;
}