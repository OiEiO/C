/*第四题： 有一个3×4的矩阵，求出最大值，以及其所在的行号和列号。*/
#include <stdio.h>
int main() {
    int a[3][4] = {{61, 48, 84, 123}, {-51, 666, 89, 23}, {35, 64, -15, -84}};
    int i, j, max = a[0][0], x, y;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    printf("MAX=%d\n", max);
    printf("In %d rows and %d columns.", x, y);
    return 0;
}