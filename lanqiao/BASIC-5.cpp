#include <iostream>

using namespace std;

int main() {
    int a[1005];
    int i, n, m;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        if (a[i] == m) {
            break;
        }
    }

    if (i == n) {
        printf("-1");
    } else {
        printf("%d", i + 1);
    }

    return 0;
}