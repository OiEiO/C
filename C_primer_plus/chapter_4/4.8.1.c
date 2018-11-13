#include <stdio.h>
int main() {
    char first_name[20], last_name[20];

    printf("Please enter your first and last name: ");
    scanf("%s%s", first_name, last_name);
    printf("%s,%s", first_name, last_name);

    return 0;
}
