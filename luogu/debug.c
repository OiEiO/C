#include <stdio.h>

int main() {
    int n;
    int f[1001] = {0}; //存每一位数的种类
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // 1-n的递推
        for (int j = 1; j <= i / 2; j++) {
            f[i] += f[j]; //每一位叠加，递推走起
        }
        f[i]++; //加上本身
    }
    printf("%d", f[n]); //输出n的种类
    return 0;
}