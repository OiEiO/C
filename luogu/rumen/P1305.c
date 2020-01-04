//遍历二叉树、递归
#include <stdio.h>
#include <stdlib.h>

typedef struct Nnode {
    char data;
    struct Nnode *LChild;
    struct Nnode *RChild;
} BiNode, *BiTree;

void CreateBiTree(BiTree *bt) //用先序遍历创建二叉树
{
    char ch;
    ch = getchar();
    if ((ch = getchar()) == '\n')
        return;
    if (ch == '*')
        (*bt) = NULL;
    else {
        *bt = (BiTree)malloc(sizeof(BiNode));
        (*bt)->data = ch;
        CreateBiTree(&((*bt)->LChild));
        CreateBiTree(&((*bt)->RChild));
    }
}

//先序遍历
void PreOrder(BiTree root) {
    if (root != NULL) {
        printf("%c ", root->data);
        PreOrder(root->LChild);
        PreOrder(root->RChild);
    }
}

int main() {
    BiTree bt;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        CreateBiTree(&bt);

    PreOrder(bt);

    return 0;
}