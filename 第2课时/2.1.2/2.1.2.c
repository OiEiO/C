#include<stdio.h>
int main()
{
	double i=1,n=0;
	printf("1+1/2+1/3+1/4+бнбн+1/99+1/100=");
	do
	{
		n=n+1/i;
		i++;
	}
	while (i>100);
	printf("%f\n",n); 
	return 0;
}
