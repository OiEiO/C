#include <stdio.h>
int main() {
    float h;

    printf("Please enter your height(inches): ");
    scanf("%f", &h);
    printf("Your height is: %.2fcm", h * 2.54);

    return 0;
}
