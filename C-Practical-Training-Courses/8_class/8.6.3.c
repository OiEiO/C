/* 第六题：打印以下图案：
*********
 *******
  *****
   ***
    *
注意： 1. 要求用三种方法：引入一维数组方法，空格符号方法和二维数组法。
           2. 不要用5个printf方法。
 */
#include <stdio.h>
int main() {
    char a[5][9];
    int i, j, k, l;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++)
            a[i][j] = ' ';
        for (k = 0; k < 9 - i * 2; k++)
            a[i][j + k] = '*';
        for (l = 0; l < i; l++)
            a[i][j + k + l] = ' ';
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 9; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }

    return 0;
}