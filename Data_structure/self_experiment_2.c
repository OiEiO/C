/**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0

//单链表的存储结构
typedef struct student {
    char id[10];
    char name[20];
    int score;
} Datatype;

typedef struct LNode {
    Datatype data;
    int length;
    struct LNode *next; //链表指针
} LNode;                //头指针

//初始化单链表
LNode *InitList() {
    LNode *L;
    L = (LNode *)malloc(sizeof(LNode)); //建立头节点，malloc:动态分配内存
    L->next = NULL;
    return L;
}

//建立单链表（尾插法）
void GreatFromTail(LNode L, int n) { LNode *p1, *p2; }
int main() {
    LNode std;
    printf("请输入学生人数：");
    scanf("%d", &std.length);
    GreatFromTail(&std, std.length);

    return 0;
}