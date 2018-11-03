/* 第一题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到
第三个月后每个月又生一对兔子，假如兔子都不死，问一年后的的兔子总数
为多少？
注意：　兔子的规律为数列1,1,2,3,5,8,13,21....
 */
#include <stdio.h>
int main() {
    int i, tu1, tu2, tu3;
    tu1 = 1;
    tu2 = 1;

    for (i = 3; i <= 12; i++) {
        tu3 = tu1 + tu2;
        tu1 = tu2;
        tu2 = tu3;
    }

    printf("The total number of rabbits after one year is: %d", tu3);
    return 0;
}
