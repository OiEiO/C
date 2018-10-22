/*猴子吃桃（递归法）*/
#include <stdio.h>
int total(int);
int main() {
    int one;
    one = total(1);
    printf("The total number to peaches is: %d", one);
    return 0;
}
int total(int i) {
    int sum = 0;
    if (i == 10)
        sum = 1; //（或者）return 1;
    else if (i < 10)
        sum = (total(i + 1) + 1) * 2; /*这里子函数里调用自己，不断向后推，直到第十天，得第十天
                                        的值为 1 ，这样就可以得到这十天所有的值。*/
    return sum;                       //（或者）return (total(i+1)+1)*2
}