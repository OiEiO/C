#include <stdio.h>
int max();
int a[10] = {15, 84, 9, 45, 16, -54, -41, -15, 100, 48}, i, num, x;
int main() {
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
    num = max();
    printf("max=%d", num);
    return 0;
}

int max() {
    x = a[0];
    for (i = 0; i < 10; i++)
        if (a[i] > x)
            x = a[i];
    return x;
}