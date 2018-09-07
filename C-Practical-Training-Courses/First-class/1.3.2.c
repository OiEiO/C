#include<stdio.h>
int main()
{
	int a[3],max,i;
	printf("Please enter any three integers: ");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	max=a[0];
	for(i=1;i<3;i++)
	if(a[i]>max)
	max=a[i];
	printf("Max=%d",max);
	return 0;
 } 
