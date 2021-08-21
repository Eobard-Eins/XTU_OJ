#include<stdio.h>
#include<math.h>

int main()
{
	__int64 x;
	while (scanf("%I64d",&x) && x!=0)
	{
		int i;
		if (x==1||(x%2==0&&x!=2))
		{
			x=0;
		}
		else
		{
			for (i=3;i<=sqrt(x);i+=2)
			{
				if (x%i==0)
				{
					x=0;
					break;
				}
			}
		}	
		x==0?printf("No\n"):printf("Yes\n"); 
	}
	
	return 0;
}
