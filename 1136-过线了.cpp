#include<stdio.h>
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int n;
		
		int fsx_z,fsx_d;
		int sum=0;
		int i;
		int ssr=0;
		scanf("%d %d %d",&n,&fsx_z,&fsx_d);
		int kemu[n];
		for (i=0;i<n;i++)
		{
			scanf("%d",&kemu[i]);
			sum=sum+kemu[i];
		}
		sum=sum*1.0/n;
		if (sum<fsx_z)
		{
			printf("No\n");
		}
		else
		{
			for (i=0;i<n;i++)
			{
				kemu[i]>=fsx_d?ssr++:ssr+=0;
			}
			ssr==n?printf("Yes\n"):printf("No\n");
		}
	}
	
	return 0;
}
