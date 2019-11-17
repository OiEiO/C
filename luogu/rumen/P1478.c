#include <stdio.h>
int main() {
    int xi[10] = {0}, yi[10] = {0};
    int i, j, n, s, a, b, ab, ans = 0, z = 0;

    scanf("%d %d", &n, &s);
    scanf("%d %d", &a, &b);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &xi[i], &yi[i]);
    }

    ab = a + b;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++)
            if (xi[j] <= ab && yi[j] <= s) {
                s -= yi[j];
                if (s <= 0) {
                    s += yi[j];
                    continue;
                }
                ans++;
            }
        if (ans > z)
            z = ans;
    }

    printf("%d", z);

    return 0;
}