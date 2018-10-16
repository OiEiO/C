#include <stdio.h>
int main() {
    float i = 1, n = 0;
    do {
        n += (i + 1) / i;
        i++;
    } while (i < 50);
    printf("2/1+3/2+4/3+5/4+...+50/49=%f\n", n);
    return 0;
}
