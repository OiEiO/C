/**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0

//单链表的存储结构
typedef struct LNode {
    char id[10];
    char name[20];
    int score;
    struct LNode *next; //链表指针
} LNode, *LinkList;     //头指针

//初始化单链表
void InitList(LinkList *L) {
    *L = (LinkList)malloc(sizeof(LNode));
    (*L)->next = NULL;
}

//建立单链表
void GreatFromHead(LinkList L) {}