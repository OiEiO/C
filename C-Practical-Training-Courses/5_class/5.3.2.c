/*要求按照考试成绩的等级输出百分制分数段，用switch语句实现：
90-100，输出A;80-89，输出B；70-79，输出C，60-69输出D，其他情况输出F.
注意：1)switch语句中，case后面只能是整型或者字符型，所以此题中，需要90-100转成整型，i/10;
2)用两个方法：if-else语句和switch语句。
*/
#include <stdio.h>
int main() {
    int n;
    printf("Please enter a grade: ");
    scanf("%d", &n);
    switch (n / 10) { //括号里为录入的值
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("E\n");
        break;
    }
    return 0;
}