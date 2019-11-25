#include <stdio.h>

int a[100000][10] = {0}, b[11] = {0};
int n, ans = 0;

void dfs(int add, int total) {
    int x, y;
    if (add == 10) {
        if (total == n) {
            for (y = 0; y < 10; y++)
                a[ans][y] = b[y];
            ans++;
        }
    } else if (total >= n)
        return;
    else {
        for (x = 1; x <= 3; x++) {
            b[add] = x;
            dfs(add + 1, total + x);
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(0, 0);

    printf("%d\n", ans);
    for (int i = 0; i < ans; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}