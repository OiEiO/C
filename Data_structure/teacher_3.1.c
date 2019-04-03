#include <stdio.h>
#include <stdlib.h>
#define Stack_Size 50
typedef struct {
    int data[Stack_Size];
    int top;
} Stack;

void meau() {
    printf("------------------------\n");
    printf("---      p:入栈      ---\n");
    printf("---      f:出栈      ---\n");
    printf("---   a:访问栈顶元素 ---\n");
    printf("---      #:退出      ---\n");
    printf("------------------------\n");
}

void push(Stack *s) {
    int n;

    if (s->top == Stack_Size - 1) {
        printf("F!\n");
        return;
    }
    printf("请输入入栈的元素:\n");
    scanf("%d", &n);
    s->top++;
    s->data[s->top] = n;
    return;
}
void pop(Stack *s) {
    printf("出栈栈顶元素：\n");
    if (s->top == -1) {
        printf("E!\n");
        return;
    }
    printf("栈顶元素为:%d\n", s->data[s->top]);
    s->top--;
}

void invi(Stack *s) {
    if (s->top == -1) {
        printf("E!\n");
        return;
    }
    printf("栈顶元素为:%d\n", s->data[s->top]);
}
int main() {
    char ch;
    Stack s;
    s.top = -1;
    printf("根据输入的字符选择操作:\n");
    meau();
    ch = getchar();
    while (ch != '#') {
        switch (ch) {
        case 'p':
            push(&s);
            break;
        case 'f':
            pop(&s);
            break;
        case 'a':
            invi(&s);
            break;
        default:
            break;
        }
        getchar();
        getchar();
        meau();
        ch = getchar();
    }
    return 0;
}