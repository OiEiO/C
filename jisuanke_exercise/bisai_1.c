#include <stdio.h>

int main() {
    int arr[6], i, j, t;

    for (i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < 5; j++)
        for (i = 0; i < 5 - j; i++)
            if (arr[i] > arr[i + 1]) {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }

    for (i = 0; i < 6; i++) {
        printf("%-4d", arr[i]);
    }

    return 0;
}