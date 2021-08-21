#include<stdio.h>
#include<math.h>
int main()
{
	int chance;
	for (scanf("%d",&chance);chance>0;chance--)
	{
		int a,b,c,d;
		scanf("%d %d %d",&a,&b,&c);
		d=sqrt(b*b-4*a*c);
		if (a==0)
		{
			if (b==0&&c!=0)
			{
				printf("0\n");
			}
			else if (b==0&&c==0)
			{
				printf("INF\n");
			}
			else
			{
				printf("1\n");
			}
		}
		else 
		{
			if (d==0)
			{
				printf("1\n");
			}
			else
			{
				d>0?printf("2\n"):printf("0\n");
			}
		}
	
	}
	return 0;
}
