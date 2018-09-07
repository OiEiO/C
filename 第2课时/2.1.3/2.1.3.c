#include<stdio.h>
int main()
{
	double i,n=0;
	printf("1+1/2+1/3+1/4+бнбн+1/99+1/100=");
	for(i=1;i<101;i++)
		n=n+1/i;
	printf("%f\n",n);
	return 0;
}