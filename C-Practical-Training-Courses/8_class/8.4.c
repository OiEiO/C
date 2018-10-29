/* 第四题：输出1000到10000之间所有满足下列条件的所有整数及其个数：整数的各位数字之和等于5。 */
#include <stdio.h>
int main() {
    int i, x = 0, a, b, c, d, n;

    for (i = 1000; i < 10000; i++) {
        a = i / 1000 % 10;
        b = i / 100 % 10;
        c = i / 10 % 10;
        d = i / 1 % 10;
        if (a + b + c + d == 5) {
            printf("%-5d", i);
            x++;
        }
    }
    printf("\nThere are %d integers that satisfy the condition.\n", x);

    return 0;
}