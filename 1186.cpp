//贪心算法求解旅行商问题测试--1
#include<stdio.h>
int flag[10]={0};//0表示对应序号的城市没去过 
int s[10][10]={0};//距离为0表示去不了 
char ans[11][10]={0};//结果 

int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++) scanf("%d",&s[i][j]);//输入 
		}
		int sta=0,sum=0;
		for(int i=0;i<=n;i++)//查找最小值n次  求得最短距离   每一行全是那一行将去的地方 
		{
			int min=1005,t;
			for(int j=(i==n?0:1);j<=n;j++){
				if(flag[j]==0&&s[sta][j]!=0&&s[sta][j]<min)
					min=s[sta][j];
			}
			for(int j=(i==n?0:1);j<=n;j++){
				if(s[sta][j]==min&&flag[j]==0){
					flag[j]=1;
					ans[0][i]=j;
					t=sta;
					sta=j;
					break;
				}
			}
			for(int j=0;j<=n;j++)
			{
				s[t][j]==min?s[t][j]=j:s[t][j]=0;
			}
			sum+=min;
		}

		
		
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++) printf("%d",s[i][j]);//输出测试 
			printf("\n");
		}
		printf("%d\n",sum);
		for(int i=0;i<=10;i++)
		{
			if(ans[i][0]=='0') break;
			
			for(int j=0;j<n-1;j++) printf("%c ",ans[i][j]);
			printf("%c",ans[i][n-1]);
			printf("\n");
		}
	}
	return 0; 
} 
