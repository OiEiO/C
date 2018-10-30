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
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 9 - 2 * i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
