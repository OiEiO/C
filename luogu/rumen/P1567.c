#include <stdio.h>
int main() {
    int a[2] = {0};
    int i, j = 0, n, m = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[1]);
        if (a[0] < a[1])
            j++;
        else {
            if (j > m)
                m = j;
            j = 1;
        }
        a[0] = a[1];
    }

    printf("%d", m);

    return 0;
}