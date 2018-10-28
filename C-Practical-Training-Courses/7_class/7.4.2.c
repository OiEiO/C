/*求一个5*4的矩阵各列元素的最大值。
调用子函数法*/
#include <stdio.h>
int cycle(int);
int x, y;
int a[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
int main() {
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 4; y++)
            printf("%-3d", a[x][y]);
        printf("\n");
    }

    for (y = 0; y < 4; y++) {
        printf("The maximun value of column %d is: %d\n", y + 1, cycle(y));
    }
    return 0;
}

int cycle(int y) {
    int max;
    max = a[0][y];
    for (x = 0; x < 5; x++) {
        if (a[x][y] > max)
            max = a[x][y];
    }
    return max;
}