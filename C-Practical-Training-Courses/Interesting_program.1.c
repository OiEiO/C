/*���ݶ������*/
#include<stdio.h>
#include<math.h>
int main(void)
{ 
    int a,b,c;
    char ch;
    while(1)//�ѳ������whileѭ����
    {
        printf("������η���ϵ��a,b,c:\n");
        scanf("%d %d %d",&a,&b,&c);
        double delta;
        double x1;
        double x2;
        double x;
        delta=b*b - 4*a*c;
         
        if(a != 0)
        {
            if(delta > 0)
            {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                printf("x1=%f,x2=%f\n",x1,x2);
            }
            else if(delta == 0)
            {
                x2=x1=(-b) / (2*a);
                printf("x2=x1=%f\n",x1);
            }
            else 
            {
                printf("���η����޽�\n");
            }
        }
        else if(b != 0 && a == 0)
        {
            x=(-c)/b;
            printf("x=%f\n",x);
        }
        else
        {
            printf("�����޽�\n");
        }
        fflush(stdin);//��ջ�����
        printf("�Ƿ����y/n? ");
        ch=getchar();//�����ַ��������Ƿ����
        if(ch!='Y'&&ch!='y')//�����Y����������
            break;
    }
    return 0;  
}
