#include<stdio.h>
#define JB 200  //基本工资 
#define ZB 100  //指标 
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int sj,sum;  //实际生产数 工资 
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
