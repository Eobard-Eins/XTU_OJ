#include<stdio.h>

int main()
{
	__int64 x,y,z,start,end;

	while (1)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		if (x!=0&&y!=0)
		{
			start = x*y;
			while (y!=0)
			{
				z = x % y;
				x = y;
				y = z;
			}
			end = start/x;
			printf("%d\n",end);
		}
		else
		{
			break;
		}
	}
	return 0;
}
