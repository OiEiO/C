#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定义一个学生类型

typedef struct student {
    char no[10];   //学号
    char name[20]; //姓名
    int score;     //分数

} STU;

//定义一个学生信息的链表结点

typedef struct snode {
    STU data;           //存储学生信息
    struct snode *next; //存储后继学生的信息
} Snode;

//初始化链表
Snode *init() {
    Snode *h;
    h = (Snode *)malloc(sizeof(Snode));
    h->next = NULL;
    return h;
}

//输入,创建链表（尾插法）
void prin(Snode *s) {
    int i, n;
    Snode *p, *r;
    printf("请输入学生人数:\n");
    scanf("%d", &n);
    r = s;
    printf("请分别输入每个学生的信息:\n");
    for (i = 1; i <= n; i++) {
        p = (Snode *)malloc(sizeof(Snode));
        printf("学号:");
        scanf("%s", p->data.no);
        printf("姓名:");
        scanf("%s", p->data.name);
        printf("成绩:");
        scanf("%d", &p->data.score);
        p->next = NULL;
        r->next = p;
        r = r->next;
        printf("----------------------------------\n");
    }
}

//输出函数
void output(Snode *s) {
    Snode *p;
    p = s;
    printf("请输出每位学生的信息:\n");

    printf("学号\t姓名\t成绩\n");

    while (p->next != NULL) {
        p = p->next;
        printf("%s\t%s\t%d\n", p->data.no, p->data.name, p->data.score);
    }
}

//主函数
int main() {
    Snode *head;

    head = init();
    prin(head);

    output(head);
    return 0;
}