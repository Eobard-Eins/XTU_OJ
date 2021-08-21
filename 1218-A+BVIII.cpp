#include<stdio.h>
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int a,b,sum,result=1; 
		scanf("%d%d",&a,&b);
		sum=a+b;
		for(int i=2;i*i<=sum;i++)
		{
			if(sum%i==0)
			{
				int js=0;
				while (sum%i==0)
				{
					js++;
					sum/=i;
				}
				result*=(js+1);
			}
		}
		sum==1?printf("%d\n",result):printf("%d\n",result*2);
	}
	return 0;
} 
