/* 2、创建一棵二叉树（二叉链式），计算非终端结点的个数并给出先序，中序和后序遍历序列。 */
#include <stdio.h>
#include <stdlib.h>

typedef struct NNode {
    char data;
    struct NNode *LChild;
    struct NNode *RChild;
} BiNode, *BiTree; //定义二叉树结点和结点指针

typedef BiTree QueueElementType;

void CreateBiTree(BiTree *bt) //用先序遍历创建二叉树
{
    char ch;
    ch = getchar();
    if (ch == '.')
        (*bt) = NULL;
    else {
        *bt = (BiTree)malloc(sizeof(BiNode));
        (*bt)->data = ch;
        CreateBiTree(&((*bt)->LChild));
        CreateBiTree(&((*bt)->RChild));
    }
}

//结点总个数
int Statistics(BiTree root) {
    static int i = 0;
    if ((root) != NULL) {
        i++;
        Statistics(root->LChild);
        Statistics(root->RChild);
    }
    return i;
}

//叶子结点个数
int leaf(BiTree root) {
    static int LeafCount = 0;
    if (root != NULL) {
        leaf(root->LChild);
        leaf(root->RChild);
        if (root->LChild == NULL && root->RChild == NULL)
            LeafCount++;
    }
    return LeafCount;
}

//先序遍历
void PreOrder(BiTree root) {
    if (root != NULL) {
        printf("%c ", root->data);
        PreOrder(root->LChild);
        PreOrder(root->RChild);
    }
}

//中序遍历
void InOrder(BiTree root) {
    if (root != NULL) {
        InOrder(root->LChild);
        printf("%c ", root->data);
        InOrder(root->RChild);
    }
}

//后序遍历
void PostOrder(BiTree root) {
    if (root != NULL) {
        PostOrder(root->LChild);
        PostOrder(root->RChild);
        printf("%c ", root->data);
    }
}

int main() {
    BiTree bt;

    printf("用先序遍历创建二叉树：");
    CreateBiTree(&bt);

    printf("\n非终端结点个数为：%d", Statistics(bt) - leaf(bt));
    printf("\n");

    printf("先序遍历：");
    PreOrder(bt);
    printf("\n");
    printf("中序遍历：");
    InOrder(bt);
    printf("\n");
    printf("后序遍历：");
    PostOrder(bt);
    printf("\n");

    return 0;
}