/*数据多次输入*/
#include <math.h>
#include <stdio.h>
int main(void) {
    int a, b, c;
    char ch;
    while (1) //把程序放入while循环里
    {
        printf("输入二次方程系数a,b,c:\n");
        scanf("%d %d %d", &a, &b, &c);
        double delta;
        double x1;
        double x2;
        double x;
        delta = b * b - 4 * a * c;

        if (a != 0) {
            if (delta > 0) {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("x1=%f,x2=%f\n", x1, x2);
            } else if (delta == 0) {
                x2 = x1 = (-b) / (2 * a);
                printf("x2=x1=%f\n", x1);
            } else {
                printf("二次方程无解\n");
            }
        } else if (b != 0 && a == 0) {
            x = (-c) / b;
            printf("x=%f\n", x);
        } else {
            printf("方程无解\n");
        }
        // fflush(stdin); //清空缓存区
        printf("是否继续y/n? ");
        ch = getchar();             //输入字符来控制是否继续
        if (ch != 'Y' && ch != 'y') //输入非Y，结束程序
            break;
    }
    return 0;
}
