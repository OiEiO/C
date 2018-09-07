#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("please you enter four number: ");
	scanf("%d",&a);
	b=a/1000%10;
	c=a/100%10;
	d=a/10%10;
	e=a/1%10;
	a=e*1000+d*100+c*10+b;
	printf("This is th four-digit reciprocal: %d",a);
	return 0;
 } 
