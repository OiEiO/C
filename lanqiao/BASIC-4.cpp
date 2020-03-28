/* #include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n, m, l = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        s.insert(m);
    }

    set<int>::iterator it;
    it = s.end();
    cout << *(it--) << endl;
    cout << *(s.begin()) << endl;

    for (it = s.begin(); it != s.end(); it++) {
        l += *it;
    }
    cout << l;

    return 0;
} */
#include <iostream>

using namespace std;

int main() {
    int n, min, max, sum = 0;
    int a[10005];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }

    printf("%d\n%d\n%d", max, min, sum);

    return 0;
}