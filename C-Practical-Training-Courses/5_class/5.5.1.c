/*求两个数的最小公倍数；
注意：用两个方法：不调用子函数法和调用子函数法。
*/
#include <stdio.h>
int main() {
    int i, n, m, mul;
    printf("Please enter two numbers: ");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= (n < m ? n : m); i++)
        if (n % i == 0 && m % i == 0)
            mul = i;                                    //最大公约数
    printf("Least common multiple: %d", (n * m) / mul); //公式：最小公倍数=两数乘积/最大公约数
    return 0;
}