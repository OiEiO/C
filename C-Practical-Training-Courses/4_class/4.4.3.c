#include <stdio.h>
int main() {
    float i, n = 0;
    for (i = 1; i < 50; i++) {
        n += (i + 1) / i;
    }
    printf("2/1+3/2+4/3+5/4+...+50/49=%f\n", n);
    return 0;
}
