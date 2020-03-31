#include <iostream>

using namespace std;

int main() {
    long long n, m;

    cin >> n;
    if (n % 2 == 1) {
        m = n * (n - 1) * (n - 2);
    } else {
        if (n % 3 == 0) {
            m = (n - 1) * (n - 2) * (n - 3);
        } else {
            m = n * (n - 1) * (n - 3);
        }
    }

    cout << m;

    return 0;
}