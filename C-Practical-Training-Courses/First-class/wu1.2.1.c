#include<stdio.h>
int main()
{
	int a;
	printf("Please enter any integer between 1~5: ");
	scanf("%d",&a);
	if(a>0 && a<5)
	{
		if(a==1)
		printf("������ͨ��ѧ\n");
		else if(a==2)
		printf("������ҵ��ѧ\n");
		else if(a==3)
		printf("�������ӿƼ���ѧ\n");
		else if(a==4)
		printf("���ľ�ҽ��ѧ\n");
	}
	else
	printf("Error!\n");
	
	return 0;
}
