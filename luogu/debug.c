#include <stdio.h>
int main() {
    int a[3] = {0};

    a[0] = 4;
    a[0]++;

    printf("%d", a[0]);

    return 0;
}