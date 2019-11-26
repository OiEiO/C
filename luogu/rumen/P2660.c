//递归
#include <stdio.h>

int ans = 0;

void recursion(int a, int b) {
    int min, max;
    if (a == b) {
        ans += a * 4;
        return;
    } else {
        min = a < b ? a : b;
        max = a > b ? a : b;
        ans += 4 * min * (max / min);
        if (max % min == 0)
            return;
        recursion(min, max % min);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    recursion(x, y);
    printf("%d", ans);

    return 0;
}
