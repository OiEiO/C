#include <stdio.h>
int main() {
    int a[10] = {15, 45, 65, 100, -87, -23, 48, -56, 78, 36}, i, j;
    for (i = 0; i < 10; i++)
        printf("%d	", a[i]);
    printf("\n");
    for (i = 0; i < 9; i++)
        for (j = i + 1; j < 10; j++)
            if (a[j] < a[i]) {
                a[j] = a[i] + a[j];
                a[i] = a[j] - a[i];
                a[j] = a[j] - a[i];
            }
    printf("Sort from small to large : \n");
    for (i = 0; i < 10; i++)
        printf("%d	", a[i]);
    return 0;
}
