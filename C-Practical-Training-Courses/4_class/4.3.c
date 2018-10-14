#include <stdio.h>
int main() {
    int a, b;
    printf("Please enter a and b: ");
    scanf("%d%d", &a, &b);
    switch (a) {
    case 1:
    case 2:
    case 3:
        printf("b+2=%d", b + 2);
        break;
    case 4:
    case 5:
    case 6:
        printf("b-2=%d", b - 2);
        break;
    default:
        printf("bx2=%d", b * 2);
        break;
    }
    return 0;
}
