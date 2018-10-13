#include <stdio.h>
int main() {
    int a[5], n, x, y;
    printf("Please enter a five-digit number : ");
    scanf("%d", &n);
    a[0] = n / 10000 % 10;
    a[1] = n / 1000 % 10;
    a[2] = n / 100 % 10;
    a[3] = n / 10 % 10;
    a[4] = n / 1 % 10;
    for (x = 1; x < 4; x++)
        for (y = x + 1; y < 5; y++)
            if (a[y] < a[x]) {
                a[x] = a[x] + a[y];
                a[y] = a[x] - a[y];
                a[x] = a[x] - a[y];
            }
    for (x = 0; x < 5; x++) {
        printf("%d", a[x]);
    }
    return 0;
}
