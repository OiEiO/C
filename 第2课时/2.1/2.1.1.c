#include<stdio.h>
int main()
{
	double a=0,n=1;
	printf("1+1/2+1/3+1/4+бнбн+1/99+1/100= ");
	while(n<101)
	{
		a=a+1/n;
		n++;
	}
	printf("%f",a);
	return 0;
 } 
