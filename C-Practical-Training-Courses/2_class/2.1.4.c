#include <stdio.h>
float num(float);
float sum = 0;
int main() {
    sum = num(1);
    printf("sum = %f", sum);
    return 0;
}

float num(float i) {
    for (i = 1; i <= 100; i++)
        sum += 1 / i;
    return sum;
}
