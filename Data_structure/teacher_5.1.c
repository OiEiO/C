/* 1、设任意n个整数存放于数组A(1:n)中，试编写算法，将所有正数排在所有负数前面。 */
#include <stdio.h>
#include <string.h>

#define N 20
typedef int AR[N];

int input(AR a) {
    int i, len;
    char ch = '!'; //随意给ch赋一个不是'\n'的值，保证下面的循环条件初次成立
    printf("请输入数组元素的值(正数和负数)，以空格分隔开，结束按回车\n");
    i = 1; // 0号单元不存放元素
    while (ch != '\n') {
        scanf("%d", &a[i]);
        ch = getchar();
        i++;
    }
    len = i - 1;
    return len;
}

void output(AR a, int len) {
    int i;
    for (i = 1; i <= len; i++)

        printf("%5d", a[i]);
    printf("\n");
}

void change(AR a, int len) {
    int i, j, temp;

    for (i = 1; i <= len; i++)
        if (a[i] < 0)

            for (j = i + 1; j <= len; j++)
                if (a[j] > 0) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
}

int main() {
    AR array;
    int len;

    len = input(array); //调用输入函数，返回数组中元素的个数

    printf("输出原数组的元素:\n");
    output(array, len); //调用输出函数

    change(array, len); //调用交换函数

    printf("输出交换后的数组:\n");
    output(array, len);

    return 0;
}