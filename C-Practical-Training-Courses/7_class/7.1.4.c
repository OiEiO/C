/*第一题（4个程序）：求下列试子的值： 1-1/2+1/3-1/4+……+1/99-1/100
注意：1）用while语句编写。
调用子函数
*/
#include <stdio.h>
float whi(int);
int main() {
    printf("1-1/2+1/3-1/4+……+1/99-1/100 = %f", whi(1));
    return 0;
}

float whi(int i) {
    float n = 0;
    for (; i <= 100; i++) {
        if (i % 2 == 0)
            n -= 1 / (float)i;
        else
            n += 1 / (float)i;
    }
    return n;
}