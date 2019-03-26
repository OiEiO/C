/* 利用顺序栈实现回文数的判定。（输入一个十进制整数，若是回文数则显示“Y”,否则显示“N”） */
#include <stdio.h>

#define Stack_Size 20
#define FALSE 0
#define TRUE 1

//顺序栈
typedef struct {
    int data[Stack_Size];
    int top;
} SeqStack;

//初始化
void InitStack(SeqStack *s) { s->top = -1; }

//进栈
int Push();
//出栈
int Pop();

int main() {
    SeqStack str;
    int i;

    for (i = 0; str.data[i] != '\0'; i++) {
        switch (str.data[i]) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            Push(&str, str.data[i]);
        }
    }
}

//进栈
int Push(SeqStack *s) {
    int x;
    if (s->top == Stack_Size - 1) {
        printf("---栈已满---");
        return FALSE;
    }
    printf("请输入进栈数字：");
    scanf("%d", &x);
    s->top++;
    s->data[s->top] = x;
    return TRUE;
}

//出栈
int Pop(SeqStack *s) {
    /* int *x;
    int n;
    x=&n; */

    if (s->top == -1) {
        printf("---栈为空---");
        return FALSE;
    } else {
        printf("%d", s->data[s->top]);
        //*x=s->data[s->top];
        s->top--;
        return TRUE;
    }
}