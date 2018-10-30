/* 第四题：输出1000到10000之间所有满足下列条件的所有整数及其个数：整数的各位数字之和等于5。 */
#include <stdio.h>
int main() {
    int i, n = 0, x = 0;

    for (i = 1000; i < 10000; i++) {
        while (n) {
            n += i % 10;
            i = i / 10;
        }
        if (n == 5) {
            printf("%-5d", n);
            x++;
        }
    }
    printf("\nThere are %d integers that satisfy the condition.\n", x);

    return 0;
}