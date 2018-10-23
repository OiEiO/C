/*第五题：求两个数的最大公因数（最大公约数）；
不调用子函数*/
#include <stdio.h>
int main() {
    int i, n, m, num;
    printf("Please enter two numbers: ");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= (n < m ? n : m); i++)
        if (n % i == 0 && m % i == 0)
            num = i;
    printf("The minimum common factor is %d.\n", num);
    return 0;
}