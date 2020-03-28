#include <iostream>

using namespace std;

int main() {
    int n, m = 0;

    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            m++;
        }
    }

    if (m == 0) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}