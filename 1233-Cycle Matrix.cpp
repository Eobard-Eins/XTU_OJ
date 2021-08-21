#include<stdio.h>
#define N 52
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int num,m;
		char str[N][N],c='A'; 
		scanf("%d",&num);
		m=2*num-1;
		int a=num-1,b=num-1;
		for (int i=num-1,u=num-1;i>=0;u++,i--)
		{
			for (int j=a;j<=b;j++)
			{
				str[i][j]=c;
				str[j][i]=c;
				str[u][j]=c;
				str[j][u]=c;
			}
			c++;
			a--;
			b++;
		}
		for (int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++) printf("%c",str[i][j]);
			printf("\n");
		}
	} 
	return 0;
}
