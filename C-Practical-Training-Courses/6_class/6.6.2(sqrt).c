/*第六题：调用子函数判断一个数是否是素数；
二、调用子函数*/
#include <math.h>
#include <stdio.h>
int pri(int);
int main() {
    int n;
    printf("Please enter a integer: ");
    scanf("%d", &n);

    if (2 > pri(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}

int pri(int x) {
    int i, mul = 1;
    for (i = 2; i <= sqrt(x); i++)
        if (x % i == 0) {
            mul = i;
            break;
        }
    return mul;
}