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
int main() {
    int i;
    float n = 500;
    printf("Profit is: ");
    scanf("%d", &i);
    if (i >= 0 && i <= 1000)
        printf("salary is: %f", n);
    else if (i > 1000 && i <= 2000)
        printf("salary is: %f", n + i * 0.1);
    else if (i > 2000 && i <= 3000)
        printf("salary is: %f", n + i * 0.15);
    else if (i > 3000 && i <= 4000)
        printf("salary is: %f", n + i * 0.2);
    else
        printf("salary is: %f", n + i * 0.25);
    return 0;
}
/*写的太过啰嗦，太多废话没有必要，详见：6.3.3 or 6.3.1*/