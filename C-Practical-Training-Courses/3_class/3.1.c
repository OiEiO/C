#include <stdio.h>
int main() {
    int x, y, z;
    for (x = 1; x <= 118; x++)
        for (y = 1; y <= 119 - x; y++) {
            z = 120 - x - y;
            if (x * 0.5 + y * 6 + z * 0.3 <= 60)
                printf("apple = %d    watermelon = %d    pear = %d\n", x, y, z);
        }
    return 0;
}
