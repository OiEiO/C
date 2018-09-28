#include <stdio.h>
int main() {
    float i = 1, sum = 0;
    do {
        sum += 1 / i;
        i++;
    } while (i <= 100);
    printf("sum = %f\n", sum);
    return 0;
}
