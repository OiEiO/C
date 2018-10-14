#include <ctype.h>
#include <stdio.h>
int main() {
    char m;
    m = getchar();
    if (isupper(m))
        putchar(tolower(m));
    else
        putchar(m);
    return 0;
}
