#include<stdio.h>
#define N 1001
int num[N]={0};
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int n;
		char c;
		scanf("%d %c",&n,&c);
		for (int i=0;i<n;i++) scanf("%d",&num[i]);
		int t;
		int s=1;
		while (s)
		{
			s=0;
			for (int j=0;j<n-1;j++)
			{
				if (c=='A'?num[j]>num[j+1]:num[j]<num[j+1])
				{
					s=1;
					t=num[j];
					num[j]=num[j+1];
					num[j+1]=t;
				}
			}
		}
		printf("%d",num[0]);
		for (int i=1;i<n;i++) printf(" %d",num[i]);
		printf("\n");
	}
	return 0;
}
