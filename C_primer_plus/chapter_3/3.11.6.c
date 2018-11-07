#include <stdio.h>
int main() {
    int n;

    printf("Please enter the quart number of water: ");
    scanf("%d", &n);
    printf("The number of water molecules is: %e", 950 / 3.0e-23 * n);

    return 0;
}
