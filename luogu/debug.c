#include <stdio.h>
int main() {
    int a, b, c;
    long double z = 2;

    for (a = 0; a < 94; a++)
        z *= z;

    printf("%Lf", z);

    return 0;
}