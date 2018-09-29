#include <stdio.h>
int main() {
    int i;
    printf("Output results : \n");
    for (i = 1; i < 100; i++)
        if (i % 10 == 6 && i % 3 == 0) /*同时满足两个条件，输出 i 值*/
            printf("%d	", i);
    return 0;
}
