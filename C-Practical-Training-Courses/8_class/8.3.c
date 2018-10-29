/* 第三题：求100～200间的全部素数。 */
#include <math.h>
#include <stdio.h>
int main() {
    int i, n = 101;

    while (n > 100 && n < 200) {
        for (i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                break;
        {
            if (i > sqrt(n))
                printf("%-4d", n);
        }
        n++;
    }
    return 0;
}
