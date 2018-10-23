/*已知某公司员工的保底薪水为500，某月所接工程的利润profit（整数）与利润
提成的关系如下所示（计量单位：元）。计算员工的当月薪。
工程利润profit	提成比率
profit≤1000 	没有提成
1000＜profit≤2000 	提成10%
2000＜profit≤3000 	提成15%
3000＜profit≤4000 	提成20%
4000>profit 	提成25%
注意：1)switch语句中，case后面只能是整型或者字符型，所以此题中，需要90-100转成整型，i/10;*/
#include <stdio.h>
#define WAGE 500
int main() {
    float i;
    int n;
    printf("Profit is: ");
    scanf("%d", &n);
    switch ((n - 1) / 1000) { // n 如果不减一，就不符合题设条件，1000没有提成，2000以后同理
    case 0:
        i = 0;
        break;
    case 1:
        i = 0.1;
        break;
    case 2:
        i = 0.15;
        break;
    case 3:
        i = 0.2;
        break;
    default:
        i = 0.25;
        break;
    }
    printf("Salary is: %.2f", WAGE + n * i);
    return 0;
}