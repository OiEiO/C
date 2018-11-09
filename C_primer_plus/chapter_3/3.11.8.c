#include <stdio.h>
int main() {
    float n;

    printf("Please enter the number of cups: ");
    scanf("%f", &n);
    printf("Pint: %.1f\n", n * 0.5);
    printf("Ounce: %.1f\n", n * 8);
    printf("Spoon: %.1f\n", n * 8 * 2);
    printf("Tea spoon: %.1f\n", n * 8 * 2 * 3);
    return 0;
}
