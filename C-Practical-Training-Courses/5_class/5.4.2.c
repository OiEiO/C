/*求10!
注意：用两个方法：不调用子函数法和调用子函数法。
*/
#include <stdio.h>
int factorial(int);
int n;
int main() {
    printf("10!=1*2*3*4*5*6*7*8*9*10=%d", n = factorial(1));
    return 0;
}
int factorial(int i) {
    n = 1;
    for (i = 1; i < 10; i++)
        n = n * (i + 1);
    return n;
}