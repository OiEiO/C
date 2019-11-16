#include <stdio.h>
#include <string.h>
int main() {
    char a[55] = {0}, b[55] = {0};
    int i, n;

    scanf("%d", &n);
    scanf("%s", a);

    for (i = 0; i < strlen(a); i++) {
        if (a[i] + n > 'z') {
            b[i] = (a[i] + n) - 26;
        } else
            b[i] = a[i] + n;
        printf("%c", b[i]);
    }
    return 0;
}