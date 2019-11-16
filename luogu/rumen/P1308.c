#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    char a[12] = {0}, b[1000005] = {0};
    int i;
    int x = -1, y = 0;
    char *f, *s;

    gets(a);
    gets(b);

    f = &a[0];
    s = &b[0];
    for (i = 0; b[i] != '\0'; i++) {
        if (tolower(*f) == towlower(*s)) {
            f++;
            s++;
            if ((*f == '\0' && *s == ' ') || (*f == '\0' && *s == '\0')) {
                f = &a[0];
                s++;
                y++;
                if (x == -1)
                    x = (i - (strlen(a) - 1));
            }
        } else {
            f = &a[0];
            s++;
        }
    }

    if (x == -1) {
        printf("-1");
    } else
        printf("%d %d", y, x);

    return 0;
}