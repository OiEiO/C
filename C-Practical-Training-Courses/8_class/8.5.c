/* 第五题：一个马戏团表演， 120个座位全满，全部门票收
入是120元，现在知道，男人每人5元，女人每人2元，小孩
每人1角。编程，输出男人、女人和小孩各有多少人。 */
#include <stdio.h>
int main() {
    int a, b, c;

    for (a = 1; a <= 118; a++)
        for (b = 1; b <= 119 - a; b++) {
            c = 120 - a - b;
            if (a * 5 + b * 2 + c * 0.1 == 120)
                printf("Men women,and children are: %d %d %d", a, b, c);
        }

    return 0;
}
