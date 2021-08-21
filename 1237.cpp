#include<stdio.h>
#define N 5000001
int ai[N]={0},a[N]={1,1};
int num[N]={0};
void aishai()
{
	int p=0;
	for(int i=0;i<N;i++)
	{
		if(!a[i])
		{
			ai[p]=i;
			p++;
			for(int j=i+i;j<N;j+=i) a[j]=1;
		}
	}
	int u=1;
	for(int i=1;i<N;i++)
	{
		if(i==ai[u])
		{
			if(ai[u]==ai[u-1]+2){
				num[i]=num[i-1]+2;
				num[i-1]=num[i]-1;
			}
			else num[i]=num[i-1];
			u++;
		}
		else num[i]=num[i-1];
	}
}
int main()
{
	aishai();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(num[b]%2!=0&&num[a]%2!=0) printf("%d\n",(num[b]-1-num[a])/2);
		else printf("%d\n",(num[b]-num[a])/2);
	}
	return 0;
}
