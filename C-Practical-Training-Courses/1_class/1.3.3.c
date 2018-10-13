#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("Please enter any three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b)?a:b;
	max=(d>c)?d:c;
	printf("max=%d\n",max); 
	return 0;
}
