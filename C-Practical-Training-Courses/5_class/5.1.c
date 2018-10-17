#include <stdio.h>
int main() {
    char ch;
    int capital = 0, small = 0, space = 0, other = 0;
    printf("Please enter: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z')
            capital++;
        else if (ch >= 'a' && ch <= 'z')
            small++;
        else if (ch == ' ')
            space++;
        else
            other++;
    }
    printf("capital: %d\nsmall: %d\nspace: %d\nother: %d\n", capital, small, space, other);
    return 0;
}