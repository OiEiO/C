/*第五题：求一个4*3的矩阵各行元素的最大值。*/
#include <stdio.h>
int main() {
    int x, y, max;
    int a[4][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}, {13, 14, 15}};

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 3; y++)
            printf("%-3d", a[x][y]);
        printf("\n");
    }

    for (x = 0; x < 4; x++) {
        max = a[x][0];
        for (y = 0; y < 3; y++) {
            if (a[x][y] > max)
                max = a[x][y];
        }
        printf("The maximum value of line %d is: %d\n", x + 1, max);
    }
    return 0;
}
