#include<stdio.h>
int main()
{
	char a[5][20]={"","������ͨ��ѧ","������ҵ��ѧ","�������ӿƼ���ѧ","���ľ�ҽ��ѧ"};
	int b;
	printf("Plesse enter any integer between 1~5: ");
	scanf("%d",&b);
	printf("%s",a[b]);
	return 0;
}
