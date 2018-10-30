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
    char a[9];
    int i, j, k, l;

    for (i = 0; i < 5; i++) {   /*行数*/
        for (j = 0; j < i; j++) //赋值空格
            a[j] = ' ';
        for (k = 0; k < 9 - i * 2; k++) //赋值 *
            a[j + k] = '*';
        for (l = 0; l < 9 - i; l++) //打印该行
            printf("%c", a[l]);
        printf("\n"); // 下一行
    }

    return 0;
}