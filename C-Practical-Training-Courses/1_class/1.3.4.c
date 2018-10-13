#include<stdio.h>
int main()
{
	int max(int a,int b,int c);
	int x,y,z,sum;
	printf("Please enter any three integers: ");
	scanf("%d %d %d",&x,&y,&z);
	sum=max(x,y,z);
	printf("max=%d",sum); 
	return 0;
}

int max(int a,int b,int c)
{
	int d;
	if(a>b)
	d=a;
	else
	d=b;
	if(d>c)
	d=d;
	else
	d=c;
	return d;
}
