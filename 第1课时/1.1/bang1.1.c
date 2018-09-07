#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Please enter a four digit number: ");
	scanf("%d",&a);
	b=a/1000;
	a=a%1000;
	c=a/100;
	a=a%100;
	d=a/10;
	a=a%10;
	e=a;
	a=e*1000+d*100+c*10+b;
	printf("This is the four-digit number: %d",a);
	return 0;
}
