/* 利用循环队列打印杨辉三角前N行的值（N <= 7）, 并以金字塔的形式输出相应的值。 */
#include <stdio.h>

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
int DeleteQueue(SeqQueue *q, int *x) {
    if (q->front == q->rear) {
        printf("---队列为空---");
        return FALSE;
    }
    *x = q->element[q->front];
    q->front = (q->front + 1) % MAX;
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

//打印杨辉三角
void YangHuiTriangle(int N) {
    SeqQueue q;

    InitQueue(&q);

    int n, i, x, temp;

    EnterQueue(&q, 1); //第一行元素入队

    for (n = 2; n <= N; n++) {
        EnterQueue(&q, 1); //第n行第一个元素入队

        for (i = N; i >= n; i--) //给数字间加空格，打印出金字塔形状
            printf("   ");       // N为打印的行数，n为每行的元素个数

        for (i = 1; i <= n - 2; i++) { //利用队中第n-1行元素产生第n行的中间n-2个元素并入队
            DeleteQueue(&q, &temp);    //出队元素赋给temp
            printf("%6d", temp);       //打印第n-1行的元素
            GetHead(&q, &x);
            temp = temp + x;      //利用第n-1行元素产生第n行元素
            EnterQueue(&q, temp); /////////////////////可以利用画图理解/////////////////////
        }

        DeleteQueue(&q, &x);
        printf("%6d", x); //打印n-1行最后一个元素
        EnterQueue(&q, 1);
        printf("\n");
    }
    while (!IsEmpty(&q)) { //打印最后一行
        DeleteQueue(&q, &x);
        printf("%6d", x);
    }
}

int main() {
    int N;
    printf("请输入想打印的行数：");
    scanf("%d", &N);
    YangHuiTriangle(N);
    printf("\n");
    return 0;
}