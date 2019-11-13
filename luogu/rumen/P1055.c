#include <stdio.h>
int main() {
    char a[15], b;
    int i, j = 1, x = 0;

    for (i = 0; i < 13; i++) {
        scanf("%c", &a[i]);
    }

    for (i = 0; i < 11; i++) {
        if (a[i] == '-')
            continue;
        else
            x += (a[i] - '0') * j++;
    }

    if ((x % 11) == 10)
        b = 'X';
    else
        b = (x % 11) + '0';

    if (b == a[12])
        printf("Right");
    else {
        a[12] = b;
        for (i = 0; i < 13; i++)
            printf("%c", a[i]);
    }

    return 0;
}