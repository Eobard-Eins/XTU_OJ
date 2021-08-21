#include<stdio.h>
#define N 101
int num[N]={0};
int main()
{
	int n;
	while (scanf("%d",&n) && n!=0)
	{
		for (int i=0;i<n;i++) scanf("%d",&num[i]);
		n--;
		for (int j=n;j>=1;j--)
		{
			for (int i=0;i<j;i++)
			{
				num[i]=num[i]%2013+num[i+1]%2013;
			}	
		}
		printf("%d\n",num[0]%2013);
	}
	return 0;
}
