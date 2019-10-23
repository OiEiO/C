#include <stdio.h>
#define MA 300
int main() {
    int a = 0;
    double b = 0;
    int x[12];
    int i;

    for (i = 0; i < 12; i++) {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 12; i++) {
        a += MA;
        a -= x[i];

        while (a >= 100) {
            a -= 100;
            b += 100;
        }
        if (a < 0)
            break;
    }

    if (a < 0) {
        printf("%d", -(i + 1));
    } else
        printf("%.f", b + (b * 0.2) + a);

    return 0;
}