/*
//桶排序
#include <stdio.h>
int main() {
    int a[105] = {0};
    int n, s, h, i, xi, yi, c = 0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;

    for (i = 0; i < n; i++) {
        scanf("%d %d", &xi, &yi);
        if (xi <= h)
            a[yi]++;
    }

    for (i = 0; i <= 100 && s >= 0; i++) {
        while (a[i]) {
            s -= i;
            c++;
            a[i]--;
            if (s < 0) {
                c--;
                break;
            }
        }
    }

    printf("%d", c);

    return 0;
} */

/* //冒泡排序
#include <stdio.h>
#define MAX 5005
int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, i, j, tx, ty, ans = 0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;

    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (yi[j] > yi[j + 1]) {
                tx = xi[j];
                xi[j] = xi[j + 1];
                xi[j + 1] = tx;

                ty = yi[j];
                yi[j] = yi[j + 1];
                yi[j + 1] = ty;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
} */

/* //选择排序
#include <stdio.h>
#define MAX 5005

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, ans = 0;
    int i, j, min;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;

    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (yi[j] < yi[min])
                min = j;
            swap(&xi[min], &xi[i]);
            swap(&yi[min], &yi[i]);
        }
    }

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
} */

/* //插入排序
#include <stdio.h>
#define MAX 5005
int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, i, j, tx, ty, ans = 0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;
    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (i = 1; i < n; i++) {
        tx = xi[i];
        ty = yi[i];
        j = i - 1;
        while ((j >= 0) && (yi[j]) > ty) {
            yi[j + 1] = yi[j];
            xi[j + 1] = xi[j];
            j--;
        }
        xi[j + 1] = tx;
        yi[j + 1] = ty;
    }

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
} */

/* //希尔排序
#include <stdio.h>
#define MAX 5005
int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, i, j, tx, ty, gap, ans = 0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;
    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (gap = n >> 1; gap > 0; gap >>= 1) {
        for (i = gap; i < n; i++) { //分组同时进行排序，一次排一个
            tx = xi[i];
            ty = yi[i];
            for (j = i - gap; j >= 0 && yi[j] > ty; j -= gap) { //组内排序
                xi[j + gap] = xi[j];
                yi[j + gap] = yi[j];
            }
            xi[j + gap] = tx;
            yi[j + gap] = ty;
        }
    }

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
} */

//归并排序
#include <stdio.h>
#include <stdlib.h>
#define MAX 5005
int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, i, ans = 0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;
    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
}

/* //快速排序
#include <stdio.h>
#define MAX 5005
int main() {
    int xi[MAX] = {0}, yi[MAX] = {0};
    int n, s, h, i, ans=0;

    scanf("%d %d %d %d", &n, &s, &h, &i);
    h += i;
    for (i = 0; i < n; i++)
        scanf("%d %d", &xi[i], &yi[i]);

    for (i = 0; i < n; i++) {
        if (xi[i] <= h && yi[i] <= s) {
            ans++;
            s -= yi[i];
        }
        if (s < 0)
            break;
    }

    printf("%d", ans);

    return 0;
} */