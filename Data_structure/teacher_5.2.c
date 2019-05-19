/* 2、编写程序，定义函数 void insert(char *s, char *t, int pos) 将字符串t插入到
字符串s中，插入位置为pos。假设分配给字符串s的空间足够让字符串t插入。 */
#include <stdio.h>
#include <string.h>

#define MAXLEN 40

void insert(char *s, char *t, int pos) {
    int i, j;
    int m, n; // m,n分别为s,t串的长度
    m = strlen(s);
    n = strlen(t);
    for (i = m; i >= pos - 1; i--)
        s[i + n] = s[i];
    i = pos - 1;
    j = 0;
    while (t[j] != '\0') {
        s[i++] = t[j++];
    }
}

int main() {
    char s1[MAXLEN];
    char s2[20];
    int pos;

    printf("请输入串s1的值:\n");
    scanf("%s", s1);
    printf("请输入串s2的值:\n");
    scanf("%s", s2);
    printf("请输入将串s2插入串s1中的位置pos值:\n");
    scanf("%d", &pos);
    insert(s1, s2, pos);
    printf("输出插入s2后的s1串为：\n");
    puts(s1);

    return 0;
}