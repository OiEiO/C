#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m = 0, s = -1, sum = 0;
    int a[3][100005];

    scanf("%d", &n);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {
                m = a[i][j] - a[k][j + 1];
                if (s > abs(m) || s == -1) {
                    s = abs(m);
                }
            }
        }
        sum += s;
    }
    printf("%d", sum);

    return 0;
}