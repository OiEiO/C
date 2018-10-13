#include <stdio.h>
int judge();
int main() {
    int n;
    printf("Please a enter year : ");
    scanf("%d", &n);
    if (judge(n))
        printf("%d is a leap year.", n);
    else
        printf("%d is not a leap year.", n);
    return 0;
}
int judge(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}