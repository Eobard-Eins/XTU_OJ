#include<stdio.h>
#define N 44
__int64 num[N][N]={0};
void yang()
{
	for(int i=0;i<N;i++) num[i][0]=1;
	for(int i=1;i<N;i++)
	{
		for(int j=1;j<N;j++)
		{
			if(num[i-1][j]+num[i-1][j-1]==0) break;
			else num[i][j]=num[i-1][j]+num[i-1][j-1];
		}
	}
}
int main()
{
	yang();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int n;
		scanf("%d",&n);
		__int64 sum=1;
		for(int i=1;i<=n/2;i++) sum+=num[n][i]*num[n-i][i];
		printf("%I64d\n",sum); 
	}
	return 0;
}
