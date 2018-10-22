/*猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了
一个，第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了
前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一
天共摘了多少个桃子。*/
#include <stdio.h>
int main() {
    int i, n, m;
    i = 9;
    m = 1;
    while (i > 0) {
        n = (m + 1) * 2;
        m = n;
        i--;
    }
    printf("The total number to peaches is: %d", n);
    return 0;
}