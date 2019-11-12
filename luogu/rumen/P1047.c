#include <stdio.h>
int main() {
    int a[10005] = {0};
    int head, last;
    int i, j, l, m, x = 0;

    scanf("%d %d", &l, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d", &head, &last);
        for (j = head; j <= last; j++) {
            if (a[j] == 0)
                a[j] = 1;
        }
    }

    for (i = 0; i <= l; i++) {
        if (a[i] == 0)
            x++;
    }

    printf("%d", x);

    return 0;
}