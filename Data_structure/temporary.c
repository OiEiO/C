#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Palindrome(char *arr1, char *arr2) {
    int i, len, mid, next, top; // len为输入元素的个数，mid为重复元素的个数，top为arr2中元素的个数
    printf("请输入：\n");
    gets(arr1);
    len = strlen(arr1);
    mid = len / 2 - 1;

    top = 0;
    for (i = 0; i <= mid; i++) { //将前一半数据传递给arr2
        arr2[++top] = arr1[i];
    }

    if (len % 2 == 0) { //数据个数为偶数，mid+1，为奇数，mid+2
        next = mid + 1;
    } else {
        next = mid + 2;
    }

    for (i = next; i <= len - 1; i++) { //如果arr1和arr2里元素相同，则top--，否则停止
        if (arr1[i] != arr2[top]) {
            break;
        }
        top--;
    }

    if (top == 0) {
        printf("%s是回文数！\n", arr1);
    } else {
        printf("%s不是回文数\n", arr1);
    }
}

int main() {
    char arr1[101];
    char arr2[101];
    Palindrome(arr1, arr2);
    // system("pause");
    return 0;
}

/*
int main() {
    double a = 1.0 / 3.0;
    printf("%f", a);

    int i, n[8];
    char num[9];
    printf("Input Number:");
    gets(num); // gets() 字符串接受 这时候 num[0]等 于你第一个输入的数 num[1]等于第二个...(依此类推)
    printf("These is you have putted in :");
    for (i = 0; i < 8; i++) {
        n[i] = (int)num[8 - i];
    }

    printf("%d", n[i]);
    return 0;
} */