#include<stdio.h>
int main()
{
	char a[5][20]={"","西安交通大学","西北工业大学","西安电子科技大学","第四军医大学"};
	int b;
	printf("Plesse enter any integer between 1~5: ");
	scanf("%d",&b);
	printf("%s",a[b]);
	return 0;
}
