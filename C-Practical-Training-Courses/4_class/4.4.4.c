#include <stdio.h>
float n = 0;
float sum(float);
int main() {
    float m;
    m = sum(1);
    printf("2/1+3/2+4/3+5/4+...+50/49=%f\n", m);
    return 0;
}
float sum(float i) {
    for (i = 1; i < 50; i++)
        n += (i + 1) / i;
    return n;
}