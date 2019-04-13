/* 1、设任意n个整数存放于数组A(1:n)中，试编写算法，将所有正数排在所有负数前面。 */
#include <stdio.h>

#define MAX 40

//定义顺序串1
typedef struct {
    char ch1[MAX];
    int len1;
} SString1;

//定义顺序串2
typedef struct {
    char ch2[MAX];
    int len2;
} SString2;

//主函数
int main() {
    SString1 s1;
    SString2 s2;
    char num[MAX];
    int i = 0, j = 0, k = 0;
    int m;

    printf("请输入：");
    scanf("%s", num);
    // gets(num);

    while (num[k] != '\0') {
        if (num[k] <= 0) {
            s1.ch1[i] = num[k];
            i++;
        } else {
            s2.ch2[j] = num[k];
            j++;
        }
        k++;
    }

    for (m = 0; m != '\0'; m++) {
        printf("%3d", s1.ch1[m]);
        printf("\n");
    }
    for (m = 0; m != '\0'; m++) {
        printf("%3d", s2.ch2[m]);
    }

    return 0;
}