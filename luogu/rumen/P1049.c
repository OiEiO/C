//递归、DP
#include <stdio.h>

int m, n, a[35] = {0}, min = 999999;

void dfs(int now, int num) {
    min = (min < now) ? min : now;
    if (num == n + 1)
        return;
    if (now - a[num] >= 0)
        dfs(now - a[num], num + 1);
    dfs(now, num + 1);
}

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    dfs(m, 1);

    printf("%d", min);

    return 0;
}