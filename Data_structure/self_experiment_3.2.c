/* 利用顺序栈实现回文数的判定。（输入一个十进制整数，若是回文数则显示“Y”,否则显示“N”） */
#include <stdio.h>

#define Stack_Size 20
#define FALSE 0
#define TRUE 1

//一号栈
typedef struct {
    int data[Stack_Size];
    int top1;
} Stack_1;

//二号栈
typedef struct {
    int data[Stack_Size];
    int top2;
} Stack_2;

//初始化一号栈
void InitStack_1(Stack_1 *q) { q->top1 = -1; }
//初始化二号栈
void InitStack_2(Stack_2 *r) { r->top2 = -1; }
//进栈

//出栈

//主函数
int main() {
    Stack_1 sta1;
    Stack_2 sta2;

    int num[Stack_Size];
    int i;

    InitStack_1(&sta1);
    InitStack_2(&sta2);

    printf("请输入一个十进制整数：");
    scanf("%d", &num[Stack_Size]);

    for (i = 0; num[i] != '\0'; i++) {
        sta1.data[i] = num[i];
        sta1.top1++;
    }

    printf("%d", sta1.data[sta1.top1]);
}