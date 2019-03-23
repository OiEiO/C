/* 1、定义一个顺序栈，输入测试数据， 分别根据其中的命令字符来处理堆栈；
（1）对所有的'P'操作，如果栈满输出'F'，否则完成压栈操作；
（2）对所有的'A'操作，如果栈空，则输出'E'，否则输出当时栈顶的值；
（3）对所有的'O'操作，如果栈空，则输出'E'，否则输出栈顶元素的值，并让其出栈；
*/
#include <stdio.h>

#define Stack_Size 50

//顺序栈
typedef struct stack {
    char data[Stack_Size];
    int top;
} SeqStack;
