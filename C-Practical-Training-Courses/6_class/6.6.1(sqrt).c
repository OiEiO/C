/*第六题：调用子函数判断一个数是否是素数；
注意：用两个方法：不调用子函数法和调用子函数法。
一、不调用子函数*/
#include <math.h>
#include <stdio.h>
int main() {
    int i, n;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            break;

    if (i > sqrt(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}