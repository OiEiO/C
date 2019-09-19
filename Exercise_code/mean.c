#include <stdio.h>
#define MAX 50
int main() {
    int i;
    float n[MAX], x = 0, m;

    printf("对几个数求均值：");
    scanf("%f", &m);

    printf("输入：");
    for (i = 0; i < m; i++) {
        scanf("%f", &n[i]);
        x = x + n[i];
    }

    printf("均值：%f", x / m);

    return 0;
}