#include <stdio.h>
float num();
float i = 1, sum = 0;
int main() {

    sum = num();
    printf("sum = %f", sum);
    return 0;
}

float num() {
    float i = 1;
    for (i = 1; i <= 100; i++)
        sum += 1 / i;
    return sum;
}
