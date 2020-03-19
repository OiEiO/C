#include <stdio.h>
int main() {
    int n, i, j;
    int value;
    int a[210];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                value = a[j];
                a[j] = a[j + 1];
                a[j + 1] = value;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}