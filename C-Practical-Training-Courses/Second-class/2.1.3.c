#include <stdio.h>
int main() {
    float i = 1, sum = 0;

    for (i = 1; i <= 100; i++) {
        sum += 1 / i;
    }
    printf("sum = %f\n", sum);
    return 0;
}
