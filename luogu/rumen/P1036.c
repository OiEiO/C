#include <stdio.h>

void dfs() {}

int main() {
    int a[25];
    int i, n, k;

    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    dfs();

    printf("");

    return 0;
}