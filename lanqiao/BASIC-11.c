#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int k;
    long long sum = 0;
    char str[20] = {0};

    scanf("%s", str);
    k = 1;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'F') {
            sum = sum * 16 + str[i] - 'A' + 10;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum * 16 + str[i] - '0';
        }
    }

    printf("%lld", sum);

    return 0;
}