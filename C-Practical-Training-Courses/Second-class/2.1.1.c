#include <stdio.h>
int main() {
    float i = 1, sum = 0;
    while (i <= 100) {
        sum += 1 / i;
        i++;
    }
    printf("sum = %f\n", sum);
    return 0;
}
