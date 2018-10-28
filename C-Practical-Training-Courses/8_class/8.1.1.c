/*第一题：写一程序，从键盘上输入任意两个数和一运算符（+：加，-：减，*：乘，/：除），计算其运算的结果并输出 。
注意：用两个方法：if-else语句和switch语句。
*/
#include <stdio.h>
int main() {
    float a, b, n = 0;
    char x;

    printf("Please enter two numbers: ");
    while (scanf("%f%f", &a, &b) != 2) {
        printf("Error!\nPlease enter two numbers: ");
        while (getchar() != 'n')
            ;
    }
    while (getchar() != '\n')
        ;
    printf("Please enter an operator(+ - * /): ");
    scanf("%c", &x);
    while (getchar() != '\n') //读取完 x 的值后，会将提交时的回车留在缓存区，再读取下一个scanf时会先读取这里残留的回车。
        ;
    while (x != '+' && x != '-' && x != '*' && x != '/') {
        printf("Error!\nPlease enter an oprator(+ - * /): ");
        scanf("%c", &x);
        while (getchar() != '\n')
            ;
    }

    if (x == '-')
        n = a - b;
    else if (x == '+')
        n = a + b;
    else if (x == '*')
        n = a * b;
    else if (x == '/')
        n = a / b;

    printf("%.2f %c %.2f = %.2f", a, x, b, n);
    return 0;
}