/*第二题：编程。
y=0               x=a||x=-a;
y=sqrt(a*a-x*x)     -a<x<a;
y=x               x<-a||x>a.
*/
#include <math.h>
#include <stdio.h>
int main()
#define A 5
{
    float x;
    printf("a=%d\nPlease enter th value of x: ", A);
    scanf("%f", &x);

    if (x == A || x == -A) {
        printf("y = 0\n");
    } else if (x > -A && x < A) {
        printf("y = %.4f\n", sqrt(A * A - x * x));
    } else
        printf("y = %f\n", x);
    return 0;
}
