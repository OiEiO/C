#include <stdio.h>
#include <string.h>

void find(char *s, int x) {
    int s1 = 0, s2 = 0;

    for (int i = 0; i < x; i++) {
        if (s[i] == '0')
            s1++;
        if (s[i] == '1')
            s2++;
    }

    if (s1 == x) {
        printf("A");
        return;
    }

    if (s2 == x) {
        printf("B");
        return;
    }

    printf("C");
    char a[300];
    strncpy(a, s, x / 2);

    find(a, x / 2);
    find(&s[x / 2], x / 2);
}

int main() {
    int n;
    char num[300];

    scanf("%s", num);
    n = strlen(num);

    find(num, n);

    return 0;
}