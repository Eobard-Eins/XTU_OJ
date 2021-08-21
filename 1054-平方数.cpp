#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d",&n) && n!=0)
	{
		__int64 x[n],y[n],i;
		for (i=0;i<n;i++)
		{
			scanf("%I64d",&x[i]);
			y[i]=x[i]*x[i];
		} 
		__int64 num=0;
		for (i=0;i<n;i++)
		{
			__int64 a;
			for (a=0;a<n;a++)
			{
				if (x[i]==y[a])
				{
					num++;
				}
			}
		}
		printf("%I64d\n",num);
	}
	return 0;
}
