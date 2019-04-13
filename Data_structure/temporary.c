#include "stdio.h"

#define MAX 50
typedef struct {
    int element[MAX];
    int front; //头指针指示器；
    int rear;  //尾指针指示器；
} DuiLie;

int Lie(DuiLie *D) {
    D->front = D->rear = 0;
    return 1;
}

//入队
int inDui(DuiLie *D, int x) {
    if ((D->rear + 1) % MAX == D->front) //队满
        return 0;
    D->element[D->rear] = x;
    D->rear = (D->rear + 1) % MAX;
    return 1;
}

//出队
int outDui(DuiLie *D, int *x) {
    if (D->rear == D->front)
        return 0;
    *x = D->element[D->front];
    D->front = (D->front + 1) % MAX;
    return 1;
}
//获取队列的头元素,但不出队；
int Head(DuiLie *D, int *x) {
    if (D->rear == D->front)
        return 0;
    *x = D->element[D->front];
    return 1;
}

int main() {
    DuiLie D;
    Lie(&D);
    int i, n, N, temp, x, j;
    printf("请输入N的值(输入多少就打印前多少行):");
    scanf("%d", &N);
    inDui(&D, 1); //将第一行元素入队；
    for (n = 2; n <= N + 1; n++) {
        inDui(&D, 1); //第n行的的第一个元素入队
        for (i = 1; i <= n - 2; i++) {
            printf(" ");
            outDui(&D, &temp);
            printf("%d", temp); //打印n-1行的元素
            Head(&D, &x);
            temp = temp + x;
            inDui(&D, temp);
        }
        outDui(&D, &x);
        printf(" ");
        printf("%d", x); //打印n-1行的最后一个元素
        inDui(&D, 1);    //第n行最后一个元素入队
        printf("\n");
    }

    while (D.rear == D.front) //打印最后一行元素
    {
        outDui(&D, &x);
        printf("%d", x);
    }
    return 0;
}