#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define FALSE 0
#define TRUE 1

//循环队列
typedef struct {
    int element[MAX];
    int front; //头指针
    int rear;  //尾指针
} SeqQueue;

//初始化循环队列
void InitQueue(SeqQueue *q) { q->front = q->rear = 0; }

//入队
int EnterQueue(SeqQueue *q, int x) {
    if ((q->rear + 1) % MAX == q->front) {
        printf("---队列已满---");
        return FALSE;
    }
    q->element[q->rear] = x;
    q->rear = (q->rear + 1) % MAX;
    return TRUE;
}

//出队
int DeleteQueue(SeqQueue *q) {
    int *x;
    x = (int *)malloc(sizeof(int));

    if (q->front == q->rear) {
        printf("---队列为空---");
        return FALSE;
    }

    *x = q->element[q->front];
    q->front = (q->front + 1) % MAX;
    return TRUE;
}

//打印杨辉三角
void YangHuiTriangle() {
    SeqQueue q;

    InitQueue(&q);

    int n;

    EnterQueue(&q, 1);
}

int main() { return 0; }