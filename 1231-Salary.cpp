#include<stdio.h>
#define JB 200  //�������� 
#define ZB 100  //ָ�� 
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int sj,sum;  //ʵ�������� ���� 
		scanf("%d",&sj);
		if (sj-ZB<0)
		{
			sum=JB+((sj-ZB)*3);
		}
		else
		{
			sum=JB+((sj-ZB)*2);
		}
		
		printf("%d\n",sum); 
	}
	return 0;
}
