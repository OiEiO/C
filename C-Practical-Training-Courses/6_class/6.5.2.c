/*第五题：求两个数的最大公因数（最大公约数）；
调用子函数*/
#include <stdio.h>
int mul(int, int);
int main() {
    int n, m;
    printf("Please enter two numbers: ");
    scanf("%d%d", &n, &m);
    printf("The minimun common factor is %d.\n", mul(n, m));
    return 0;
}

int mul(int x, int y) {
    int i, num;
    for (i = 1; i <= (x < y ? x : y); i++)
        if (x % i == 0 && y % i == 0)
            num = i;
    return num;
}