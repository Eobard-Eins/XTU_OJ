#include<stdio.h>

int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int a,b,c,d,e;
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		printf("%d\n",a+b+c+d+e);
	}
	return 0;
} 
