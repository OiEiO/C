#include <stdio.h>
int num();
int i;
int main() {
    printf("Output results : \n");
    for (i = 1; i < 100; i++)
        if (num())
            printf("%d	", i);
    return 0;
}

int num() {
    if (i % 10 == 6 && i % 3 == 0)
        return 1;
    else
        return 0;
}