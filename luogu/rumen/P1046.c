#include <stdio.h>
#define HIGH 30
int main() {
    int a[10];
    int i, j = 0, h;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &h);

    for (i = 0; i < 10; i++) {
        if (a[i] <= (h + HIGH))
            j++;
    }

    printf("%d", j);

    return 0;
}