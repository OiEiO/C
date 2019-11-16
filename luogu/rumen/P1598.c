#include <stdio.h>
#include <string.h>
int main() {
    int a[30] = {0};
    char b[400] = {0};
    int i, j, n, max;

    for (i = 0; i < 4; i++) {
        gets(b);
        n = strlen(b);
        for (j = 0; j < n; j++) {
            if (b[j] >= 'A' && b[j] <= 'Z')
                a[b[j] - 'A']++;
        }
    }

    max = a[0];
    for (i = 1; i < 26; i++)
        if (max < a[i])
            max = a[i];

    for (i = max; i > 0; i--) {
        for (j = 0; j < 26; j++) {
            if (a[j] >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = 0; i < 26; i++) {
        printf("%c ", ('A' + i));
    }

    return 0;
}