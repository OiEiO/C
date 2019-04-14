/* 2、编写程序，定义函数 void insert(char *s, char *t, int pos) 将字符串t插入到
字符串s中，插入位置为pos。假设分配给字符串s的空间足够让字符串t插入。 */
#include <stdio.h>
#include <string.h>

#define MAXLEN 40
#define FALSE 0
#define OK 1

//定义顺序串1
typedef struct {
    char ch1[MAXLEN];
    int len1;
} SString1;

//定义顺序串2
typedef struct {
    char ch2[MAXLEN];
    int len2;
} SString2;

//插入
int Insert(SString1 *s, SString2 t, int pos) {
    int i;

    if (pos < 0 || pos > s->len1) {
        printf("\t插入位置不合法！");
        return FALSE;
    }

    if (s->len1 + t.len2 <= MAXLEN) {
        for (i = s->len1 + t.len2 - 1; i >= t.len2 + pos; i--)
            s->ch1[i] = s->ch1[i - t.len2];
        for (i = 0; i < t.len2; i++)
            s->ch1[i + pos] = t.ch2[i];
        s->len1 = s->len1 + t.len2;
    } else if (pos + t.len2 <= MAXLEN) {
        for (i = MAXLEN - 1; i > t.len2 + pos - 1; i--)
            s->ch1[i] = s->ch1[i - t.len2];
        for (i = 0; i < t.len2; i++)
            s->len1 = MAXLEN;
    } else {
        for (i = 0; i < MAXLEN - pos; i++)
            s->ch1[i + pos] = t.ch2[i];
        s->len1 = MAXLEN;
    }

    printf("%s", s->ch1);
    return OK;
}

//主函数
int main() {
    SString1 s;
    SString2 t;

    int pos;

    printf("请输入字符串s：");
    scanf("%s", s.ch1);
    s.len1 = strlen(s.ch1);
    printf("请输入字符串t：");
    scanf("%s", t.ch2);
    t.len2 = strlen(t.ch2);
    printf("请输入想插入字符串s的位置：");
    scanf("%d", &pos);

    Insert(&s, t, pos - 1);

    return 0;
}