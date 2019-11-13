#include <stdio.h>
#include <string.h>
int main() {
    char a[7], b[7];
    int i, x, y;

    scanf("%s", a);
    scanf("%s", b);

    x = a[0] - '@';
    for (i = 1; i < strlen(a); i++) {
        x = x * (a[i] - '@');
    }
    y = b[0] - '@';
    for (i = 1; i < strlen(b); i++) {
        y = y * (b[i] - '@');
    }

    if ((x % 47) == (y % 47))
        printf("GO");
    else
        printf("STAY");

    return 0;
}