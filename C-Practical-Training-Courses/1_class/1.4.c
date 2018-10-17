#include <stdio.h>
int main() {
    int a[10], i, m = 0, n = 0;
    printf("请输入10个整数：");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
        if (a[i] % 2 == 0)
            m = m + a[i];
        else
            n = n + 1;
    printf("奇数有%d个，偶数的累加和为%d", n, m);
    return 0;
}
