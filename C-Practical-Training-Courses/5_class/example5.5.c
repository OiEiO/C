#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);
int main(void) {
    int m, n, result_gcd, result_lcm;

    printf("求两个数的最大公约数及最小公倍数？\n请输入你想计算的两个数：\n");
    scanf("%d%d", &m, &n);
    result_gcd = gcd(m, n);
    result_lcm = lcm(m, n);
    printf("最大公约数为：%d\n最小公倍数为：%d\n", result_gcd, result_lcm);

    return 0;
}

int gcd(int a, int b) {
    int temp;
    if (a < b) {
        //交换两个数，使大数放在a上
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        //利用辗除法，直到b为0为止
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    int temp_lcm;
    temp_lcm = a * b / gcd(a, b); //最小公倍数等于两数之积除以其最大公约数
    return temp_lcm;
}