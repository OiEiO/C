#include <stdio.h>
int main() {
    int a;
    printf("Please enter any integer between 1~5: ");
    scanf("%d", &a);
    if (a > 0 && a < 5) {
        if (a == 1)
            printf("西安交通大学\n");
        else if (a == 2)
            printf("西北工业大学\n");
        else if (a == 3)
            printf("西安电子科技大学\n");
        else if (a == 4)
            printf("第四军医大学\n");
    } else
        printf("Error!\n");

    return 0;
}
