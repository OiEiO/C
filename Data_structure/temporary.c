#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double a = 1.0 / 3.0;
    printf("%f", a);

    int i, n[8];
    char num[9];
    printf("Input Number:");
    gets(num); // gets() 字符串接受 这时候 num[0]等 于你第一个输入的数 num[1]等于第二个...(依此类推)
    printf("These is you have putted in :");
    for (i = 0; i < 8; i++) {
        n[i] = (int)num[8 - i];
    }

    printf("%d", n[i]);
    return 0;
}