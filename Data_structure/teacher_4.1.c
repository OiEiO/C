/* 利用循环队列打印杨辉三角前N行的值（N <= 7）, 并以金字塔的形式输出相应的值。 */
#include <stdio.h>

#define MAXQSIZE 100
#define N 7

typedef struct SqQueue {
    int data[MAXQSIZE];
    int front, rear;
} Qe;

void InitQueue(Qe *h) //创建队列
{
    h->front = 0;
    h->rear = 0;
    return;
}

int EnQueue(Qe *h, int e) //添加队列元素
{
    if ((h->rear + 1) % MAXQSIZE == h->front) {
        printf("队列已满\n");
        return 0;
    }
    h->data[h->rear] = e;
    h->rear = (h->rear + 1) % MAXQSIZE;
    return 1;
}

int deleteEle(Qe *h, int *e) //删除队列元素
{
    if (h->front == h->rear) {
        printf("队列为空！");
        return 0;
    }
    *e = h->data[h->front];
    h->front = (h->front + 1) % MAXQSIZE;
    return 1;
}
void getHead(Qe *h, int *x) //得到队列头元素
{
    *x = h->data[h->front];
}

int QueueEmpty(Qe *h) //判断队列是否为空
{
    if (h->front == h->rear)
        return 1;
    else
        return 0;
}

int main() {

    Qe S; //定义一个循环队列

    int i, temp, n, x, j;

    InitQueue(&S); //初始化队列

    EnQueue(&S, 1); //第一行元素入队

    for (n = 2; n <= N; n++) //计算第n行元素并入队，同时打印第n行中间的n-2个元素并入队

    {

        for (j = n - 1; j <= N; j++)
            printf("  ");

        EnQueue(&S, 1); //第n行的第一个元素入队

        for (i = 1; i <= n - 2; i++) {

            deleteEle(&S, &temp);  //队首元素出队
            printf("%2d  ", temp); //打印第n-1行元素

            getHead(&S, &x);
            temp = temp + x;
            EnQueue(&S, temp);
        }

        deleteEle(&S, &x);

        printf("%2d  ", x); // 打印第n-1行的最后一个元素

        EnQueue(&S, 1); //第n行的最后一个元素入队
        printf("\n");
    }

    printf("  ");
    while (!QueueEmpty(&S)) {
        deleteEle(&S, &x);
        printf("%2d  ", x);
    }
    printf("\n");

    return 0;
}
