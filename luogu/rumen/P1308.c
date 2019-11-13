#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    char a[12], b[1000005];
    int i, j;
    int x = 0;

    scanf("%s", a);
    scanf("%s", b);

    for (i = 0; i < strlen(b); i++) {
        for (j = 0; j < strlen(a); j++) {
            if (tolower(a[j]) == tolower(b[i]))
                x++;
        }
    }

    printf("-1");

    return 0;
}