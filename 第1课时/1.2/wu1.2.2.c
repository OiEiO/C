#include<stdio.h>
int main()
{
	int a;
	printf("Please enter any integer between 1~5: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("������ͨ��ѧ\n");break;
		case 2:printf("������ҵ��ѧ\n");break;
		case 3:printf("�������ӿƼ���ѧ\n");break;
		case 4:printf("���ľ�ҽ��ѧ\n");break;
		default:printf("Please enter any integer between 1~5!!");
	 } 
}
