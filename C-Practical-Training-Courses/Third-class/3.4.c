#include <stdio.h>
int main() {
    int i, n = 0, sum = 0;
    for (i = 1; i < 101; i++) {
        if (i % 2 != 0)
            n += i;
        sum += i;
    }
    printf("Odd add up is : %d\nAll the number add up to : %d\n", n, sum);
    return 0;
}
