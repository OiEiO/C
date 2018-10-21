/*判断一个一元二次方程ａx2＋ｂｘ＋ｃ＝０的根的情况，并求根。
注意：基本的算法：
① ａ＝０，不是二次方程。
② b2－４ａｃ＝０，有两个相等实根。
③ b2－４ａｃ＞０，有两个不等实根。
④	 b2－４ａｃ＜０，无解。
*/
#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, delta;
    printf("Please enter a b c: ");
    scanf("%f%f%f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (a == 0) {
        printf("This equation is not a two order equation.\n");
        printf("x=%f", -c / b);
    } else {
        if (delta == 0) {
            printf("This equation has two identical real roots.\n");
            printf("x1=x2=%f", -b / (2 * a));
        } else if (delta > 0) {
            printf("This equation has two unequal real roots.\n");
            printf("x1=%f  x2=%f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
        } else if (delta < 0) {
            printf("There is no solution to this equation.\n");
        }
    }
    return 0;
}