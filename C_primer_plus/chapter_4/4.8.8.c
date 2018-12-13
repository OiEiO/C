#include <stdio.h>

#define LITER_PER_GALLON 3.785
#define KM_PER_MILE 1.609

int main() {
    float miles, gallon;

    printf("Please enter the number of miles traveled: ");
    scanf("%f", &miles);
    printf("Please enter the amount of gasoline consumed: ");
    scanf("%f", &gallon);
    printf("Miles per gallon: %.1f\n", miles / gallon);
    printf("Liters per 100 kilometers: %.1f\n", gallon * LITER_PER_GALLON / (miles * KM_PER_MILE));

    return 0;
}
