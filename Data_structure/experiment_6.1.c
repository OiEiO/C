/* 1、创建一棵二叉树（二叉链式），利用队列输出二叉树的层次遍历序列。 */
#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 50
#define FALSE 0
#define TRUE 1

//定义二叉树（链式）
typedef struct Node {
    char data;
    struct Node *Lchild;
    struct Node *Rchild;
} Bitree;

//定义队列
typedef struct {
    char element[QUEUE_SIZE];
    int front;
    int rear;
} SeqQueue;

//初始化
void InitBitree() {}

void InitQueue(SeqQueue *q) { q->front = q->rear = 0; }

//入队
int EnterQueue(SeqQueue *q, int x) {
    if ((q->rear + 1) % QUEUE_SIZE == q->front) {
        printf("---队列已满---");
        return FALSE;
    }
    q->element[q->rear] = x;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    return TRUE;
}

//出队
int DeleteQueue(SeqQueue *q, int *x) {
    if (q->front == q->rear) {
        printf("---队列为空---");
        return FALSE;
    }
    *x = q->element[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    return TRUE;
}

//取对头元素
int GetHead(SeqQueue *q, int *x) {
    if (q->front == q->rear)
        return FALSE;
    *x = q->element[q->front];
    return TRUE;
}

//判断队列是否为空
int IsEmpty(SeqQueue *q) {
    if (q->front == q->rear)
        return TRUE;
    else
        return FALSE;
}

//创建二叉树
void CreateBitree(Bitree *t) {
    char c;
    printf("请以前序输入二叉树的内容：");
    scanf("%c", &c);

    if ('#' == c) {
        t = NULL;
    } else {
        t = (Bitree *)malloc(sizeof(Bitree));
        t->data = c;
        CreateBitree(&*t->Lchild);
        CreateBitree(&*t->Rchild);
    }
}

//层次遍历
int LeveLorder(Bitree *t) {
    SeqQueue q;
    Bitree p;

    InitQueue(&q);
}

//主函数
int main() {
    Bitree *t;

    printf("请按前序输入二叉树内容：");
    CreateBitree(t);

    return 0;
}