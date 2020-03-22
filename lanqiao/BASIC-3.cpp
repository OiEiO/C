#include <iostream>

using namespace std;

int main() {
    int i, j;
    int n, m;
    int m1, m2;

    cin >> n >> m;

    m1 = 0;
    m2 = m;

    while (n--) {
        int k;
        if (m1 > m) {
            k = m1 - m;
        } else {
            k = 0;
        }
        for (i = m1; i > k; i--)
            cout << char('A' + i);
        for (j = 0; j < m2; j++)
            cout << char('A' + j);
        cout << '\n';
        m1++;
        m2--;
    }

    return 0;
}