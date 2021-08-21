#include<stdio.h>
#define N 1000005
int ai_1[N]={1,1},ai_2[N]={0},js[N]={0};
__int64 nb[N]={0};
void aishai()
{
	int p=0;
	for(int i=1;i<N+10;i++)
	{
		if(!ai_1[i])
		{
			ai_2[p]=i;
			p++;
			for(int j=i+i;j<N;j+=i) ai_1[j]=1;
		}
	}
}
void dabiao()
{
	int p=1;
	for(int i=2;ai_2[i]!=0;i++)
	{
		__int64 m=(ai_2[i]+ai_2[i-1])/2;
		nb[p]=m;
		p++;
	}
	int u=1;
	for(int i=1;i<N;i++)
	{
		if(nb[u]<=i){
			js[i]=js[i-1]+1;
			u++;
		}
		else{
			js[i]=js[i-1];
		}
	}
}

int main()
{
	aishai();
	dabiao();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",js[b]-js[a-1]);
	}
	return 0;
}
