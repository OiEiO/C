/*第六题：调用子函数判断一个数是否是素数；
二、调用子函数*/
#include <stdio.h>
int pre(int);
int main() {
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    if (pre(n) == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
int pre(int x) {
    int i, m = 0;
    for (i = 2; i < x; i++)
        if (x % i == 0) {
            m++;
        }
    return m;
}