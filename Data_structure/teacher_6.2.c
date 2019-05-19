/* 2、创建一棵二叉树（二叉链式），计算非终端结点的个数并给出先序，中序和后序遍历序列。 */
#include <stdio.h>
#include <stdlib.h>

typedef char DataType;

//二叉树二叉链式定义
typedef struct Node {
    DataType data;
    struct Node *LChild;
    struct Node *RChild;
} BiTNode, *BiTree;

/*先序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
void PreOrder(BiTree root)

{
    if (root != NULL) {
        printf("%c  ", root->data); /*访问根结点*/
        PreOrder(root->LChild);     /*先序遍历左子树*/
        PreOrder(root->RChild);     /*先序遍历右子树*/
    }
}

/*中序遍历二叉树, root为指向二叉树(或某一子树)根结点的指针*/
void InOrder(BiTree root)

{
    if (root != NULL) {
        InOrder(root->LChild);      /*中序遍历左子树*/
        printf("%c  ", root->data); /*访问根结点*/
        InOrder(root->RChild);      /*中序遍历右子树*/
    }
}

/* 后序遍历二叉树，root为指向二叉树(或某一子树)根结点的指针*/
void PostOrder(BiTree root)

{
    if (root != NULL) {
        PostOrder(root->LChild);    /*后序遍历左子树*/
        PostOrder(root->RChild);    /*后序遍历右子树*/
        printf("%c  ", root->data); /*访问根结点*/
    }
}

//统计二叉树结点的个数
int count_tree(BiTree root) {

    if (root) {

        return (count_tree(root->LChild) + count_tree(root->RChild) + 1);
    }

    return 0;
}

/* 统计终端(叶子)结点个数*/

int leaf(BiTree root) {
    int LeafCount;
    if (root == NULL)
        LeafCount = 0;
    else if ((root->LChild == NULL) && (root->RChild == NULL))
        LeafCount = 1;
    else
        LeafCount = leaf(root->LChild) + leaf(root->RChild);
    /* 叶子数为左右子树的叶子数目之和 */
    return LeafCount;
}

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

//主函数
int main() {
    BiTNode *T;
    int num;
    printf("按扩展先序遍历序列建立二叉树，请输入序列:\n");
    T = CreateBiTree();

    printf("先序遍历输出结点为:");
    PreOrder(T);
    printf("\n");

    printf("中序遍历输出结点为:");
    InOrder(T);
    printf("\n");

    printf("后序遍历输出结点为:");
    PostOrder(T);
    printf("\n");

    num = count_tree(T) - leaf(T);
    printf("二叉树中非终端结点个数为:%d", num);
    printf("\n");

    return 0;
}