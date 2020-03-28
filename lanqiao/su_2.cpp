//相比暴力求解，优化了循环，速度更快
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i, n;

    cin >> n;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            break;

    if (i > sqrt(n)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}