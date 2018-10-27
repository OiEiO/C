/*第二题：将一个3行4列的二维数组行和列元素互换，存到另一个二维数组中。 */
#include <stdio.h>
int main() {
    int x, y;
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 9, 9, 9}};
    int b[4][3];

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 4; y++)
            printf("%-3d", a[x][y]);
        printf("\n");
    }

    for (x = 0; x < 4; x++) { // a b 数组交换
        for (y = 0; y < 3; y++)
            b[x][y] = a[y][x];
    }

    printf("\n");

    for (x = 0; x < 4; x++) { //交换后再将 b 数组输出
        for (y = 0; y < 3; y++)
            printf("%-3d", b[x][y]);
        printf("\n");
    }

    return 0;
}