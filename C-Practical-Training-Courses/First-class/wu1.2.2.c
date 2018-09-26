#include <stdio.h>
int main() {
    int a;
    printf("Please enter any integer between 1~5: ");
    scanf("%d", &a);
    switch (a) {
    case 1:
        printf("西安交通大学\n");
        break;
    case 2:
        printf("西北工业大学\n");
        break;
    case 3:
        printf("西安电子科技大学\n");
        break;
    case 4:
        printf("第四军医大学\n");
        break;
    default:
        printf("Please enter any integer between 1~5!!");
    }
}
