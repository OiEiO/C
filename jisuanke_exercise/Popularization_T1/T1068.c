/* 救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及
        每个屋顶的坐标和人数都将由输入决定，求出所有人都到达大本营并
        登陆所用的时间。

    在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将
        人送回大本营。坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表示。

    救生船每次从大本营出发，以速度 50 米 /
    分钟驶向下一个屋顶。达到一个屋顶后，救下其上的所有人，每人上
        船 11 分钟。然后船原路返回，回到大本营，每人下船 0.5分钟。假设原
        点与任意一个屋顶的连线不穿过其它屋顶。

 */
#include <math.h>
#include <stdio.h>
#define NO 105
int main() {
    int r[NO];
    double x[NO], y[NO];
    double min = 0.0;
    double mi = 0.0;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %d", &x[i], &y[i], &r[i]);
    }
    for (i = 0; i < n; i++) {
        min = x[i] * x[i] + y[i] * y[i];
        min = sqrt(min) / 50;
        min = min * 2;
        min = min + r[i] + (r[i] / 2.0);
        mi += min;
    }
    printf("%.lf", ceil(mi));
    return 0;
}