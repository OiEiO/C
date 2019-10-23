#include <stdio.h>
int main() {
    int a, b, c;
    int x[9], i, j;
    for (a = 192; a < 334; a++) {
        b = a * 2;
        c = a * 3;

        x[0] = a / 100;
        x[1] = (a % 100) / 10;
        x[2] = a % 10;
        x[3] = b / 100;
        x[4] = (b % 100) / 10;
        x[5] = b % 10;
        x[6] = c / 100;
        x[7] = (c % 100) / 10;
        x[8] = c % 10;

        for (i = 0; i < 9; i++) {
            for (j = i; j < 9; j++) {
                if (x[i] == x[j])
                    ;
            }
        }
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}