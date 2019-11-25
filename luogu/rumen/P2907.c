//递归
#include <stdio.h>
int n, k;
int dfs(int v) {
    if (v <= k)
        return 1;
    if ((v - k) % 2 == 0)
        return (dfs((v - k) / 2) + dfs((v + k) / 2));
    else
        return 1;
}

int main() {
    scanf("%d %d", &n, &k);
    printf("%d", dfs(n));
    return 0;
}