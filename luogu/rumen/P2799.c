//递归
#include <stdio.h>
#include <string.h>

char a[100005] = {0};

int s(int r) {
    int i, j, mid;
    mid = r / 2;

    if (r % 2 == 1) {
        return r;
    } else {
        for (i = 0, j = r - 1; i < mid; i++, j--) {
            if (a[i] != a[j])
                return r;
        }
        s(mid);
    }
}

int main() {

    scanf("%s", a);

    printf("%d", s(strlen(a)));

    return 0;
}