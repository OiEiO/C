/* 1、设任意n个整数存放于数组A(1:n)中，试编写算法，将所有正数排在所有负数前面。 */
#include <stdio.h>

#define MAX 40

//比较
void contrast() {
    int num[MAX], m1[MAX], m2[MAX];
    int n;
    char space;
    int a = 0, b = 0;
    int i;
    int k1 = 0, k2 = 0;

    printf("请输入：");
    while (1) { //输入
        scanf("%d", &n);
        space = getchar();
        num[a++] = n;
        b++;
        if (space == '\n') {
            break;
        }
    }

    for (i = 0; i < b; i++) { //将正负分开
        if (num[i] < 0) {
            m1[k1] = num[i];
            k1++;
        } else {
            m2[k2] = num[i];
            k2++;
        }
    }

    for (i = 0; i < k1; i++) { //将负数接到正数后面
        m2[k2] = m1[i];
        k2++;
    }

    for (i = 0; i < k2; i++) { //输出
        printf("%-4d", m2[i]);
    }
}

int main() {

    contrast();

    return 0;
}