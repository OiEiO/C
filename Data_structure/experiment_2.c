/* 定义一个包含学生信息（学号，姓名，成绩）的单链表，使其具有如下功能：
(1) 根据指定学生个数，逐个输入学生信息；
(2) 逐个显示学生表中所有学生的相关信息；
(3) 根据姓名进行查找，返回此学生的学号和成绩；
(4) 根据指定的位置可返回相应的学生信息（学号，姓名，成绩）；
(5) 给定一个学生信息，插入到表中指定的位置；
(6) 删除指定位置的学生记录；
(7) 统计表中学生个数。
 */
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
    Snode *h;                           //头结点
    h = (Snode *)malloc(sizeof(Snode)); //分配一个空间
    h->next = NULL;
    return h;
}

//菜单界面
int meau(int num);
//输入、创建链表（尾插法）
void prin(Snode *s);
//输出函数
void output(Snode *s);
//按姓名查找
void Locate(Snode *s);
//按序号查找
void Search(Snode *s);
//插入函数

//删除函数

//统计函数

//清空缓存区
void empty();

//主函数
int main() {
    Snode *head;
    head = init();

    int a = 0;
    int num = 0;
    int exit = 0;

    while (exit != 1) {
        a = meau(num);
        switch (a) {
        case 1:
            prin(head);
            break;
        case 2:
            output(head);
            break;
        case 3:
            Locate(head);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            exit = 1;
            break;
        }
        empty();
    }
    printf("\n----------------------\n");
    printf("^_^ 感谢使用学生表 ^_^\n");
    printf("----------------------\n");
    return 0;
}

//菜单界面
int meau(int num) {
    printf("=========================================");
    printf("\n\n\t          菜单界面");
    printf("\n\n\t       1.创建学生表");
    printf("\n\n\t       2.显示学生表");
    printf("\n\n\t       3.按姓名查找");
    printf("\n\n\t       4.按序号查找");
    printf("\n\n\t       5.插入学生");
    printf("\n\n\t       6.删除学生");
    printf("\n\n\t       7.统计学生人数");
    printf("\n\n\t       8.退出学生表");
    printf("\n\n=========================================\n");
    printf("请输入想要执行的操作：");
    scanf("%d", &num);
    return num;
}

//输入,创建链表（尾插法）
void prin(Snode *s) {
    int i, n;
    Snode *p, *r;
    printf("请输入学生人数:");
    scanf("%d", &n);
    r = s;
    printf("请分别输入每个学生的信息:\n");
    for (i = 1; i <= n; i++) {
        p = (Snode *)malloc(sizeof(Snode));
        printf("---------------------------\n");
        printf("学号:");
        scanf("%s", p->data.no);
        printf("姓名:");
        scanf("%s", p->data.name);
        printf("成绩:");
        scanf("%d", &p->data.score);
        p->next = NULL;
        r->next = p;
        r = r->next;
    }
}

//输出函数
void output(Snode *s) {
    Snode *p;
    p = s;

    printf("\t学生表");
    printf("\n*********************\n");
    printf("学号\t姓名\t成绩\n");

    while (p->next != NULL) {
        p = p->next;
        printf("%s\t%s\t%d\n", p->data.no, p->data.name, p->data.score);
    }
    printf("*********************\n");
}

//按姓名查找
void Locate(Snode *s) {
    Snode *p;
    p = s;

    char student_name[20];

    printf("\n请输入想要查找学生的姓名：");
    scanf("%s", student_name);

    while (p != NULL) {
        if (p->data.name != student_name) {
            p = p->next;
        } else
            printf("\n--------------------\n");
        printf("学号\t姓名\t成绩\n");
        printf("%s\t%s\t%d", p->data.no, p->data.name, p->data.score);
        printf("--------------------\n");
    }
}

//按序号查找
void Search(Snode *s) {}

//清空缓存区
void empty() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}