#include<stdio.h>
#define N 101
#define M 1000000007
__int64 f[N][N]={0};
void yuchuli()
{
	for(int i=0;i<N;i++) f[i][0]=1;
	for(int i=0;i<N;i++) f[0][i]=1;
	for(int i=1;i<N;i++)
	{
		for(int j=1;j<N;j++)
		{
			f[i][j]=(f[i-1][j-1]%M+f[i-1][j]%M+f[i][j-1]%M)%M;
		}
	}
}
int main()
{
	yuchuli();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		printf("%I64d\n",f[n][m]);
	}
	return 0;
}
