/*求两个数的最小公倍数；
注意：用两个方法：不调用子函数法和调用子函数法。
*/
#include <stdio.h>
int multiple(int, int); //子函数里有两个int，所以在括号里也要声明两个。
int main() {
    int mul, n, m;
    printf("Please enter two numbers: ");
    scanf("%d%d", &n, &m);
    mul = multiple(n, m); //传递参数n,m
    printf("least common multiple: %d", n * m / mul);
    return 0;
}
int multiple(int a, int b) { //将n,m赋值给a,b。记得在主函数里定义参数，还得在子函数里定义不同的参数，这样才会参数传递。
    int i, x;
    for (i = 1; i <= (a < b ? a : b); i++)
        if (a % i == 0 && b % i == 0)
            x = i;
    return x;
}