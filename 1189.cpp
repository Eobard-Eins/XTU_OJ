#include<stdio.h>
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int a,b,c,x0;
		
		scanf("%d %d %d",&a,&b,&c);
		
	
		if (c != 1)
		{
			if (a==b)
			{
				printf("None\n");
			}
			else
			{
				
				x0=(a-b*c)/(c-1);
				if (x0<0)
				{
					printf("None\n");
				}
				else
				{
					(a-b*c)%(c-1)==0?printf("%d\n",x0):printf("None\n");
				}
			}
		}
		else
		{
			if (a==b)
			{
				b!=0?printf("0\n"):printf("1\n");
			}
			else
			{
				printf("None\n"); 
			}
		}
	}
	return 0;
}
