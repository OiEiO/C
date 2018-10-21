/*求下列试子的值：1!+2!+3!+……+50!。*/
#include <stdio.h>
double factorail(int, double);
int i;
int main() {
    double sum = 0;
    for (i = 1; i <= 50; i++)
        sum += factorail(i, 1); //阶乘相加
    printf("1!+2!+....+50!=%e", sum);
    return 0;
}
double factorail(int n, double m) { //子函数算阶乘
    // double m = 1;
    for (i = 1; i <= n; i++)
        m += m * i;
    return m;
}