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
    for (x = 0; x < 5; x++) {
        n = 0;
        for (y = 0; y < 4; y++)
            n += a[x][y];
        printf("The average of line %dth is %.2f.\n", x + 1, n / 4);
    }
    return 0;
}
