#include <stdio.h>
int main() {
    int a[110];
    int i, j, x = 0;

    for (i = 0;; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            x = i;
            break;
        }
    }

    for (j = x - 1; j >= 0; j--) {
        printf("%d ", a[j]);
    }

    return 0;
}