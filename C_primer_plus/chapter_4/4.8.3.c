#include <stdio.h>
int main() {

    double n = 0;

    printf("Please enter a floating point number: ");
    scanf("%lf", &n);
    printf("The inpur is %.1lf or %.1e.\n", n, n);
    printf("The input is %+.3lf or %.3e.\n", n, n);

    return 0;
}
