/* 1、设任意n个整数存放于数组A(1:n)中，试编写算法，将所有正数排在所有负数前面。 */
#include <stdio.h>

#define MAX 40

//比较
void contrast() {
    int num[MAX], m1[MAX], m2[MAX];
    int k1 = 0, k2 = 0;
    int i, k = 0, n;
    int a = 0, b = 0;
    char space;

    printf("请输入：");
    while ((space = getchar()) != '\n') {
        scanf("%d", &n);
        num[a++] = n;
        b++;
    }

    for (i = 0; i < b; i++) {
        if (num[i] <= 0) {
            m1[k1] = num[i];
            k1++;
        } else {
            m2[k2] = num[i];
            k2++;
        }
    }
    while (k < k2) {
        printf("%-4d", m2[k]);
        k++;
    }
}

int main() {

    contrast();

    return 0;
}