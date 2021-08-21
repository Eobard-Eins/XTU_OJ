#include<stdio.h>
#define N 1000000007
#define M 1000001
__int64 f[M]={0,0,1},pf[M]={1};
void yuchuli()
{
	for(int i=1;i<M-1;i++) pf[i]=2*pf[i-1]%N;
	for(int i=3;i<M;i++) f[i]=(f[i-1]+f[i-2]+pf[i-2])%N;
}
int main()
{
	yuchuli();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int n;
		scanf("%d",&n);
		printf("%I64d\n",f[n]);
	}
	return 0;
}
