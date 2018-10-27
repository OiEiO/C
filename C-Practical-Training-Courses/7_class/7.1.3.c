/*第一题（4个程序）：求下列试子的值： 1-1/2+1/3-1/4+……+1/99-1/100
注意：1）用for语句编写。
*/
#include <stdio.h>
int main() {
    int i;
    float n = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            n -= 1 / (float)i;
        else
            n += 1 / (float)i;
    }

    printf("1-1/2+1/3-1/4+……+1/99-1/100 = %f\n", n);
    return 0;
}
