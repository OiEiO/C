/* 1、创建一棵二叉树（二叉链式），利用队列输出二叉树的层次遍历序列。 */
#include <malloc.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define ERROR 0
#define OK 1
#define MAXSIZE 50 /*队列的最大长度*/

typedef char DataType;

//二叉树的二叉链式存储

typedef struct Node {
    DataType data;
    struct Node *LChild;
    struct Node *RChild;
} BiTNode, *BiTree;

//定义队列
typedef struct {
    BiTree element[MAXSIZE]; /* 队列的元素空间*/
    int front;               /*头指针指示器*/
    int rear;                /*尾指针指示器*/
} SeqQueue;

// 建立二叉树
BiTree CreateBiTree() {
    BiTree bt;
    char ch;
    ch = getchar();
    if (ch == ' ')
        bt = NULL; //输入空格代表子树为空
    else {
        bt = (BiTree)malloc(sizeof(BiTNode)); //生成一个新结点
        bt->data = ch;

        bt->LChild = CreateBiTree(); //生成左子树
        bt->RChild = CreateBiTree(); //生成右子树
    }
    return bt;
}

/*初始化队列操作*/
void InitQueue(SeqQueue *Q) {
    /* 将*Q初始化为一个空的循环队列 */
    Q->front = Q->rear = 0;
}

/*入队操作*/
int EnterQueue(SeqQueue *Q, BiTree x) {
    /*将元素x入队*/
    if ((Q->rear + 1) % MAXSIZE == Q->front) /*队列已经满了*/
        return (FALSE);

    Q->element[Q->rear] = x;

    Q->rear = (Q->rear + 1) % MAXSIZE; /* 重新设置队尾指针 */
    return (TRUE);                     /*操作成功*/
}

/*出队操作*/
int DeleteQueue(SeqQueue *Q, BiTree *x) {
    /*删除队列的队头元素，用x返回其值*/
    if (Q->front == Q->rear) /*队列为空*/
        return (FALSE);
    *x = Q->element[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE; /*重新设置队头指针*/
    return (TRUE);                       /*操作成功*/
}

int IsEmpty(SeqQueue *Q) {
    /*提取队列的队头元素，用x返回其值*/
    if (Q->front == Q->rear) /*队列为空*/
        return (TRUE);
    else
        return (FALSE); /*操作成功*/
}
// 层次遍历
int LayerOrder(BiTree bt) {
    SeqQueue Q;
    BiTree p;

    // p=(BiTree *)malloc(sizeof(BiTree));

    InitQueue(&Q); /*初始化空队列Q*/

    if (bt == NULL)
        return ERROR; /* 若二叉树bt为空树，则结束遍历*/

    EnterQueue(&Q, bt); /* 若二叉树bt非空，则根结点bt入队，开始层次遍历*/

    while (!IsEmpty(&Q)) /*若队列非空，则遍历为结束，继续进行*/
    {
        DeleteQueue(&Q, &p); /*队头元素出队并访问 */
        printf("%c  ", p->data);

        if (p->LChild)
            EnterQueue(&Q, p->LChild); /*若p的左孩子非空，则进队*/
        if (p->RChild)
            EnterQueue(&Q, p->RChild); /*若p的右孩子非空，则进队*/
    }                                  /*while*/
    return OK;
} /* LayerOrder */

//主函数
int main() {
    BiTNode *T;
    printf("按扩展先序遍历序列建立二叉树，请输入序列:\n");
    T = CreateBiTree();

    printf("层次遍历输出结点为:");
    LayerOrder(T);

    return 0;
}