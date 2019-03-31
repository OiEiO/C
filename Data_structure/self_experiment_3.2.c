/* 利用顺序栈实现回文数的判定。（输入一个十进制整数，若是回文数则显示“Y”,否则显示“N”） */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Stack_Size 20

//一号栈
typedef struct {
    char data[Stack_Size];
    int top1;
} Stack_1;

//二号栈
typedef struct {
    char data[Stack_Size];
    int top2;
} Stack_2;

//比较
void judge() {
    Stack_1 sta1;
    Stack_2 sta2;

    int len;

    printf("请输入：");
    gets(sta1.data);
    len = strlen(sta1.data);

    sta2.top2 = 0;

    for (sta1.top1 = len - 1; sta1.top1 >= 0; sta1.top1--) {
        sta2.data[sta2.top2] = sta1.data[sta1.top1];
        sta2.top2++;
    }

    if (strcmp(sta1.data, sta2.data) == 0) {
        printf("\n---输入数据是回文数---\n");
    } else {
        printf("\n---输入数据不是回文数---\n");
    }
}

//主函数
int main() {

    judge();

    return 0;
}