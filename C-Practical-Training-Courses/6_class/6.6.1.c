/*第六题：调用子函数判断一个数是否是素数；
注意：用两个方法：不调用子函数法和调用子函数法。
一、不调用子函数*/
#include <stdio.h>
int main() {
    int i, n, m = 0;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
        if (n % i == 0) {
            m++;
        }

    if (m == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}