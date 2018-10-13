#include <stdio.h>
int main() {
    int a[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int x, y;
    float n;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 4; y++)
            printf("%3d", a[x][y]);
        printf("\n");
    }
    for (y = 0; y < 4; y++) {
        n = 0;
        for (x = 0; x < 5; x++)
            n += a[x][y];
        printf("The average of the %dth column is %.2f.\n", y + 1, n / 5);
    }
    return 0;
}
