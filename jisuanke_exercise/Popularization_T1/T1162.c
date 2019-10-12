#include <stdio.h>
#include <string.h>
#define LEN 100

int a[LEN][LEN] = {0}, b[LEN][LEN] = {0};
int i, j, m = 0, n = 0;

void A() {
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b[j][(n - 1) - i] = a[i][j];
        }
    }
}

int B() {}

int C() {}

int D() {}

int main() {
    char c[100];

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%s", c);

    for (i = 0; c[i + 1] != '\0'; i++) {
        switch (c[i]) {
        case 'A':
            A();
            break;
        case 'B':
            B();
            break;
        case 'C':
            C();
            break;
        case 'D':
            D();
            break;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}