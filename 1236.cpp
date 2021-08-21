#include<stdio.h>
#define N 1000001
int fn[30]={0,1,2};
void fn_chushihua()
{
	for(int i=3;fn[i]<+N;i++) fn[i]=fn[i-1]+fn[i-2];
}
int f(int x)
{
	int y=1;
	for (x;x>0;x--) y*=2;
	return y;
}
int main()
{
	fn_chushihua();
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int m,i=29,num[30]={0},p=0;
		scanf("%d",&m);
		while(m)
		{
			for(i;fn[i]>m;i--);
			num[p]=i;
			m-=fn[i];
			p++;
		}
		int two[30]={0};
		for(int j=0;j<p;j++) two[num[j]-1]=1;
		int u=0,sum=0;
		for(int j=0;j<=num[0]-1;j++,u++) sum+=two[j]*f(u);
		printf("%d\n",sum);
	}
	return 0;
}
