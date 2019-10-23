#include <stdio.h>
int main() {
    int a, b, c, d;
    int e, f;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b > d) {
        f = (60 - b) + d;
        if (a > c) {
            e = (24 - a) + c - 1;
        } else
            e = c - a - 1;
    }
    if (b <= d) {
        f = d - b;
        if (a > c) {
            e = (24 - a) + c;
        } else
            e = c - a;
    }

    printf("%d %d", e, f);

    return 0;
}