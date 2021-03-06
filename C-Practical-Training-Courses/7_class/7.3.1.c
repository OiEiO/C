/*输入三角形的三边长，求三角形的面积。
算法思路：
（1）通过键盘输入三边长的值a，b，c；
（2）判断是否构成三角形； 条件式: （a+b>c)&&(b+c>a)&&(a+c>b)
（3）若能构成，计算三角形的面积并输出s=sqrt(l*(l-a)*(l-b)*(l-c))
（4）用if-else语句。
*/
#include <math.h>
#include <stdio.h>
int main() {

    float a, b, c, l, s;
    printf("Please enter the side lengths a b c of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    l = (a + b + c) / 2;                       //半周长
    s = sqrt(l * (l - a) * (l - b) * (l - c)); //海伦公式

    if (a + b > c && b + c > a && a + c > b) {
        printf("The area of the triangle is: %.2f\n", s);
    } else {
        printf("This triangle does not exist.\n");
    }

    return 0;
}