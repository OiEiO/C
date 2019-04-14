/* 往数组里输入数字，用空格分隔，回车结束 */
#include <stdio.h>
int main() {
    int num;
    int i = 0, j = 0;
    int arr[10];

    while (1) {
        scanf("%d", &num);
        char c = getchar();
        arr[i++] = num;
        j++;
        if (c == '\n') {
            break;
        }
    }

    for (i = 0; i < j; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}