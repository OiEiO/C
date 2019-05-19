/* 利用循环队列打印杨辉三角前N行的值（N <= 7）, 并以金字塔的形式输出相应的值。 */
#include <stdio.h>

#define MAXQSIZE 100

typedef struct SqQueue {
    int data[MAXQSIZE];
    int front, rear;
} Q;

void InitQueue(Q *h) //创建队列
{
    h->front = 0;
    h->rear = 0;
    return;
}
int EnQueue(Q *h, int e) //添加队列元素
{
    if ((h->rear + 1) % MAXQSIZE == h->front) {
        printf("队列已满\n");
        return 0;
    }
    h->data[h->rear] = e;
    h->rear = (h->rear + 1) % MAXQSIZE;
    return 1;
}
int getHead(Q *h) //得到队列头元素
{
    return h->data[h->front];
}

int QueueEmpty(Q *h) //判断队列是否为空
{
    if (h->front == h->rear)
        return 1;
    else
        return 0;
}
int deleteEle(Q *h, int *e) //删除队列元素
{
    if (QueueEmpty(h)) {
        printf("队列为空！");
        return 0;
    }
    *e = getHead(h);
    h->front = (h->front + 1) % MAXQSIZE;
    return 1;
}

void travelQueue(Q *h, int k) //遍历输出
{
    int a = 0;
    int p = 0, i;
    for (i = 1; i <= k; i++) {
        p = a;
        deleteEle(h, &a);

        printf("%d ", a);
        EnQueue(h, a + p);
    }
    EnQueue(h, a);
    printf("\n");
}

int main() {
    int n = 100, i, j;
    Q S;
    while (n) {
        printf("输入要输出的杨辉三角行数,若结束请输入0：\n"); // n不要太大
        scanf("%d", &n);

        InitQueue(&S);
        EnQueue(&S, 1);
        for (i = 1; i <= n; i++) {
            for (j = n; j > i; j--)
                printf(" ");
            travelQueue(&S, i);
        }
    }
    return 0;
}
