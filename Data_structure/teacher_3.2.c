#include <stdio.h>
#include <string.h>

#define Stack_Size 50

typedef struct {
    char elem[Stack_Size];
    int top;
} SeqStack;

void push(SeqStack *s, char *ch) {
    int i = 0;
    if (s->top == Stack_Size - 1)
        return;

    while (ch[i] != '\0') {
        s->top++;
        s->elem[s->top] = ch[i];
        i++;
    }
    // s->elem[s->top]='\0';

    return;
}

void pop(SeqStack *s, char *ch) {
    int i = 0;
    if (s->top == -1) {
        printf("error");
        return;
    }

    while (s->top >= 0) {

        ch[i] = s->elem[s->top];
        s->top--;
        i++;
    }
    ch[i] = '\0';

    return;
}

void judge(SeqStack *s, char *data) {

    char ch[50];
    push(s, data);

    pop(s, ch);

    if (strcmp(data, ch) == 0)
        printf("yes!\n");
    else
        printf("no!\n");
}

int main() {
    char data[50];
    SeqStack s;
    // int i = 0;
    s.top = -1;
    printf("请任意输入一个形如a&b的字符串\n");
    scanf("%s", data);
    // printf("%s",data);
    judge(&s, data);

    return 0;
}