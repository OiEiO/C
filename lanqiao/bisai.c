#include <stdio.h>
int main() {
    int i = 0, j;
    int x = 0, y = 0;
    int a[20] = {0};

    while (1) {
        scanf("%d", &a[i++]);
        if (getchar() == '\n') {
            break;
        }
    }

    for (j = 0; j < i; j++) {
        if (a[j] > x || a[j] > y) {
            if (a[j] < x) {
                y = a[j];
            }
            x = a[j];
        }
    }

    printf("%d", y);

    return 0;
}