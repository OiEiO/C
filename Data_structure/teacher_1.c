#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//定义一个学生类型

typedef struct student {
    char no[10];   //学号
    char name[20]; //姓名
    int score;     //分数

} STU;

//定义一个学生信息的顺序线性表

#define MAXSIZE 20 // 最多能存储的学生人数
typedef struct {
    STU data[MAXSIZE]; //存储学生信息
    int length;        //表示学生当前人数即线性表的长度
} SqList;

//菜单
void meau() {
    printf("请选择要进行的操作:\n");
    printf("----------------------------------------------\n");
    printf("--            1:插入学生信息                --\n");
    printf("--            2:删除学生信息                --\n");
    printf("--            3:按姓名查找学生信息          --\n");
    printf("--            4:按序号查找学生信息          --\n");
    printf("--            5:统计学生个数                --\n");
    printf("--            6:输出学生信息                --\n");
    printf("--            0:退出                        --\n");
    printf("----------------------------------------------\n");
}

//输入函数
void prin(SqList *s) {
    int i;
    printf("请输入学生人数:\n");
    scanf("%d", &s->length);
    printf("请分别输入每个学生的信息:\n");
    for (i = 0; i < s->length; i++) {
        printf("学号:");
        scanf("%s", s->data[i].no);
        printf("姓名:");
        scanf("%s", s->data[i].name);
        printf("成绩:");
        scanf("%d", &s->data[i].score);
        printf("----------------------------------\n");
    }
}

//输出函数
void output(SqList *s, int n) {
    int i;
    printf("请输出每位学生的信息:\n");

    printf("学号\t姓名\t成绩\n");
    for (i = 0; i < n; i++)
        printf("%s\t%s\t%d\n", s->data[i].no, s->data[i].name, s->data[i].score);
}

//按姓名查找
void search1(SqList *s, int n) {
    char ch[20];
    int i;
    printf("请输入要查找的学生姓名:\n");
    scanf("%s", ch);

    for (i = 0; i < n; i++)
        if (strcmp(s->data[i].name, ch) == 0) {
            printf("查找学生的信息如下:\n");
            printf("学号\t成绩\n");
            printf("%s\t%d\n", s->data[i].no, s->data[i].score);
            return;
        }
    printf("not found!");
}
//按序号查找
void search2(SqList *s, int n) {

    int pos;
    printf("请输入要查找的学生序号:\n");
    scanf("%d", &pos);

    if (pos < 0 || pos > s->length) {
        printf("序号有误！");
        return;
    }
    printf("查找学生的信息如下:\n");
    printf("学号\t姓名\t成绩\n");
    printf("%s\t%s\t%d\n", s->data[pos - 1].no, s->data[pos - 1].name, s->data[pos - 1].score);
}

//插入
void insert(SqList *s) {
    int pos, i;
    printf("请输入插入学生的位置:\n");
    scanf("%d", &pos);

    for (i = s->length - 1; i >= pos - 1; i--) {
        strcpy(s->data[i + 1].no, s->data[i].no);
        strcpy(s->data[i + 1].name, s->data[i].name);
        s->data[i + 1].score = s->data[i].score;
    }

    printf("请输入插入学生的信息:\n");
    printf("学号:\n");
    scanf("%s", s->data[pos - 1].no);
    printf("姓名:\n");
    scanf("%s", s->data[pos - 1].name);
    printf("成绩:\n");
    scanf("%d", &s->data[pos - 1].score);
    s->length++;
}

//删除
void del(SqList *s) {
    int pos, i;
    printf("请输入删除学生的位置:\n");
    scanf("%d", &pos);
    for (i = pos; i < s->length - 1; i++) {
        strcpy(s->data[i - 1].no, s->data[i].no);
        strcpy(s->data[i - 1].name, s->data[i].name);
        s->data[i - 1].score = s->data[i].score;
    }
    s->length--;
}

//统计人数
void len(SqList *s) { printf("学生人数为:%d\n", s->length); }

//主函数
int main() {
    SqList std;
    int i = -1;

    prin(&std);

    meau();

    while (i) {
        scanf("%d", &i);
        switch (i) {
        case 1:
            insert(&std);
            break;
        case 2:
            del(&std);
            break;
        case 3:
            search1(&std, std.length);
            break;
        case 4:
            search2(&std, std.length);
            break;
        case 5:
            len(&std);
            break;
        case 6:
            output(&std, std.length);
            ;
            break;
        }
        getchar();
        getchar();
        meau();
    }
}