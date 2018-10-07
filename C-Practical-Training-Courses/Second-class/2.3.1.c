#include <stdio.h>
int main() {
    int a[10] = {13, 56, 48, -45, -41, 64, -45, 15, -5, 17}, i, j = 0, k = 0, sum = 0;
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < 10; i++) {
        if (a[i] > 0)
            j += a[i];
        if (a[i] < 0)
            k += a[i];
        sum += a[i];
    }
    printf("Positive sum = %d	Negative sum = %d\nAll numbers sum = %d", j, k, sum);
    return 0;
}
