/*
第二题：求出2到1000之间的素数的个数并求出所有素数的和，将结果输出。
注意：用两个方法：不调用子函数法和调用子函数法。
 */
#include <math.h>
#include <stdio.h>
int main() {
    int i, n = 2, m = 1, num = 0;

    while (n > 2 && n < 1000) {
        for (i = 2; i <= sqrt(n); i++)
            if (n % i == 0) {
                num++;
            }
        break;
        {
            if (i > sqrt(n)) {
                m += n;
            }
        }
        n++;
    }

    printf("There are %d prime nimbers.\nThe total number is: %d", num, m);
    return 0;
}
