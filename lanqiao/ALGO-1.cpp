#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, l, r, k;
    int s1[1005], s2[3005], s3[1005];

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &s1[i]);
    scanf("%d", &m);
    for (int i = 0; i < 3 * m; i++)
        scanf("%d", &s2[i]);

    for (int i = 2; i < 3 * m; i += 3) {
        l = s2[i - 2];
        r = s2[i - 1];
        k = s2[i];
        for (int j = l; j <= r; j++) {
            s3[j] = s1[j];
        }
        sort(s3 + l, s3 + r + 1);
        printf("%d\n", s3[r - k + 1]);
    }

    return 0;
}

/* #include <iostream>
using namespace std;
int main() {
    int a[1001];
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    while (m--) {
        int b[1001];
        int l, r, k;
        cin >> l >> r >> k;
        //赋值给新的数组，以免影响到后面的查询
        for (int i = l; i <= r; i++)
            b[i] = a[i];
        //从大到小排序
        for (int i = 1; i <= r - l; i++)
            for (int j = l; j <= r - i; j++) {
                if (b[j] < b[j + 1]) {
                    int t;
                    t = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = t;
                }
            }
        cout << b[l + k - 1] << endl;
    }
    return 0;
} */