#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m1 = 0, m2 = 0;
    int a[10005];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (m1 > a[i]) {
            m1 = a[i];
        }
        if (m2 < a[i]) {
            m2 = a[i];
        }
    }
    return 0;
}