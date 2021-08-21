#include<stdio.h>
#include<string.h>
#define N 63 
__int64 ans[N][N]={0};
__int64 num[N]={0},quan[N]={0};
void yuchuli()
{
	quan[0]=1;
	for(int i=1;i<N;i++) quan[i]=quan[i-1]*2;
}
__int64 min(__int64 a,__int64 b)
{
	return a<b?a:b;
}
__int64 dfs(int zuo,int you,int lunshu)
{
	if(zuo>you) return 0;//递归到最底层 
	if(ans[zuo][you]!=0) return ans[zuo][you];//此时已得出结果，输出 
	else return ans[zuo][you]=min(num[zuo]*quan[lunshu-1]+dfs(zuo+1,you,lunshu+1),num[you]*quan[lunshu-1]+dfs(zuo,you-1,lunshu+1));
}
int main()
{
	yuchuli();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		memset(ans,0,sizeof(ans));
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%I64d",&num[i]);
		}
		printf("%I64d\n",dfs(0,n-1,1));
	} 
	return 0;
}
