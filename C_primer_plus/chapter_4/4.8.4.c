#include <stdio.h>
int main() {
    float x;
    char name[20];

    printf("Please enter you height(inch) and name: ");
    scanf("%f %s", &x, name);
    printf("%s, you are %.3f feet tall.", name, x / 100);

    return 0;
}
