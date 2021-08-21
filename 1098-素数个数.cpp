#include<stdio.h>

#define N 1000001

int num[N]={1,1};
int sushu[N]={0,0};


int main()
{
	int m=2;
	for (int i=2;i<=N;i++)  //预处理 
	{
		if (!num[i])                           
		{
			sushu[m]=sushu[m-1]+1;
			m++; 
			for (int j=i+i;j<N;j+=i) num[j]=1;
		}
		else
		{
			sushu[m]=sushu[m-1];
			m++;         //sushu 截止到当前编号的数字的素数个数 
		}
	}
	int k;
	for (scanf("%d",&k);k>0;k--)         //输入次数 
	{
		int n,n0,v;
		
		
		scanf("%d %d",&n,&n0);
		if (n>n0)
		{                     //比较输入的两个数的大小 
			v=n0;
			n0=n;
			n=v;
		}
	
		printf("%d\n",sushu[n0]-sushu[n-1]);   //输出两数之间的素数个数 
	}
	return 0;
}
