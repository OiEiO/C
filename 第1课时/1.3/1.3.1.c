#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Please enter any three integers: ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	max=a;
	else
	max=b;
	if(max>c)
	printf("MAX=%d",max);
	else
	printf("MAX=%d",c);
	return 0;
}
