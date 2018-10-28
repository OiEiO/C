/*求一个5*4的矩阵各列元素的最大值。
注意：1）用两个方法：不调用子函数法和调用子函数法。
     2）求每一列的最大值，需要把每一列的第一个数作为最大值，然后让这个数和后面的每个数进行比较。
*/
#include <stdio.h>
int main() {
    int a[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int x, y, max;

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 4; y++)
            printf("%-3d", a[x][y]);
        printf("\n");
    }

    for (y = 0; y < 4; y++) {
        max = a[0][y]; //将每一列的第一个设为最大，再进行比较。
        for (x = 0; x < 5; x++) {
            if (a[x][y > max])
                max = a[x][y];
        }
        printf("The maximun value of column %d is: %d\n", y + 1, max);
    }

    return 0;
}
