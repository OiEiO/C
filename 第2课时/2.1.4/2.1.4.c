#include<stdio.h>
int main()
{
	double num,i,n;
	double sum(double i,double n);
	num=sum(i,n);
	printf("1+1/2+1/3+1/4+бнбн+1/99+1/100=%f\n",num);
	return 0;
}

double sum(double i,double n)
{
	while(i<101)
	{
		n=n+1/i;
		i++;
	}
	return n;
}
