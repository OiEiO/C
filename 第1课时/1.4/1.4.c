#include<stdio.h>
int main()
{
	int a[10],i,m=0,n=0;
	printf("������10��������");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		if(a[i]%2==0)
			m=m+a[i];
		else
	
			n=n+1;
	printf("������%d����ż�����ۼӺ�Ϊ%d",n,m);
	return 0;
 } 
