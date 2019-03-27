/* 1、定义一个顺序栈，输入测试数据， 分别根据其中的命令字符来处理堆栈；
（1）对所有的'P'操作，如果栈满输出'F'，否则完成压栈操作；
（2）对所有的'A'操作，如果栈空，则输出'E'，否则输出当时栈顶的值；
（3）对所有的'O'操作，如果栈空，则输出'E'，否则输出栈顶元素的值，并让其出栈；
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
#define Stack_Size 20

typedef struct {
    char data[Stack_Size];
    int top;
} SeqStack;

//初始化
void InitStack(SeqStack *s) { s->top = -1; }
//进栈
int Push(SeqStack *s);
//出栈
int Pop(SeqStack *s);
//菜单
char meau();
//刷新缓存区
void empty();

//主函数
int main() {
    SeqStack sc;
    // SeqStack *s;

    char b, c;
    int exit = 0;

    InitStack(&sc);

    while (exit != 1) {
        b = meau();
        // b=(b>='a'&&b<='z')?(b-32):b;
        switch (toupper(b)) { // ctype.h里函数：toupper<小写转大写>、tolower<大转小>
        case 'P':
            if (Push(&sc)) {
                printf("\n---入栈成功---");
            }
            break;
        case 'A':
            if (sc.top == -1) {
                printf("---栈为空---");
            } else {
                c = sc.data[sc.top]; //////////////  . 和 -> 的区别
                printf("\n栈顶元素为：%c", c);
            }
            break;
        case 'O':
            if (Pop(&sc))
                break;
        case 'Z':
            exit = 1;
            break;
        default:
            printf("\n---输入有误---\n");
            break;
        }
        empty();
    }
    printf("\n---成功退出---\n");
    return 0;
}

//菜单
char meau() {
    char a;
    printf("\n=========================================");
    printf("\n\n\t          菜单界面");
    printf("\n\n\t       P.进栈");
    printf("\n\n\t       A.栈顶元素");
    printf("\n\n\t       O.出栈");
    printf("\n\n\t       Z.退出");
    printf("\n\n=========================================\n");
    printf("请输入想要执行的操作：");
    scanf("%c", &a);
    getchar(); ////////////////////为啥
    return a;
}

//进栈
int Push(SeqStack *s) {
    char x;

    printf("\n请输入进栈元素：");
    scanf("%c", &x);

    if (s->top == Stack_Size - 1) {
        printf("---栈已满---\n");
        return FALSE;
    }
    s->top++;
    s->data[s->top] = x;
    return TRUE;
}

//出栈
int Pop(SeqStack *s) {
    char *x;
    x = (char *)malloc(sizeof(char));

    if (s->top == -1) {
        printf("---无可出栈元素---");
        return FALSE;
    } else {
        *x = s->data[s->top];
        printf("出栈元素：%c", *x);
        s->top--;
        return TRUE;
    }
}

//刷新缓存区
void empty() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}
