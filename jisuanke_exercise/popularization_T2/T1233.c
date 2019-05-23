/* 蒜头君最近买了一个书架用来存放奶牛养殖书籍，但书架很快被存满了，只剩最顶层有空余。
蒜头君共有 N 头奶牛（1，20000），每头奶牛有自己的高度 H (1,10000),N 头奶牛的总高度为 S,
书架高度为 B (1,2000000007)
输入：第一行输入奶牛个数和书架高度，下面输每头奶牛的高度
推荐算法：贪心算法
知识点：比较、排序
 */

#include <stdio.h>
#define N 200 //正确通过需要将数组的值设为20000以上

int main() {
    int n, s = 0, b;
    int i, imax, x, h[N];

    scanf("%d %d", &n, &b);
    for (i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    for (i = 0; i < n; i++) {
        for (imax = (i + 1); imax < n; imax++) {
            if (h[i] < h[imax]) {
                x = h[i];
                h[i] = h[imax];
                h[imax] = x;
            }
        }
    }

    for (i = 0; i < n; i++) {
        s = s + h[i];
        if (s >= b) {
            printf("%d", (i + 1));
            break;
        }
    }

    return 0;
}