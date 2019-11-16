#include <stdio.h>
#include <string.h>
int main() {
    char a[25] = {0}, b = '0', x[25] = {0}, y[15] = {0};
    int i, j = 0;

    scanf("%s", a);

    for (i = 0; i < strlen(a); i++) {
        switch (a[i]) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if (b == '.' || b == '/' || b == '%')
                y[j++] = a[i];
            else
                x[i] = a[i];
            break;
        case '.':
            b = '.';
            break;
        case '/':
            b = '/';
            break;
        case '%':
            b = '%';
            break;
        default:
            break;
        }
    }

    for (i = strlen(x) - 1; i >= 0; i--) {
        if (x[i] == '0')
            continue;
        printf("%c", x[i]);
    }
    if (b != '0')
        printf("%c", b);
    for (i = strlen(y) - 1; i >= 0; i--) {
        if (y[i] == '0')
            continue;
        printf("%c", y[i]);
    }

    return 0;
}