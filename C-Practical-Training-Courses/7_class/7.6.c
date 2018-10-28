/*第六题：求一个5*3的矩阵所有元素的最大值。*/
#include <stdio.h>
int main() {
    int x, y, max;
    int a[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 66, 9}, {10, 11, 12}, {13, 14, 15}};

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++)
            printf("%-3d", a[x][y]);
        printf("\n");
    }

    printf("\n");

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 3; y++) {
            if (a[x][y] > max)
                max = a[x][y];
        }
    }

    printf("Max = %d", max);
    return 0;
}
