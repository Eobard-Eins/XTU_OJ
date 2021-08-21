#include<stdio.h>
#include<string.h>
#define K 105
#define max 300005
int num[K][5]={0};
int a[K]={0},b[K]={0};
int pd[5]={0};
int ans[max][5]={0};
int n,k;
int judge()
{
	for(int i=0;i<k;i++){
		int aa=0,bb=0;
		for(int j=0;j<4;j++){
			for(int u=0;u<4;u++){
				if(j==u&&num[i][u]==pd[j]) aa++;
				if(j!=u&&num[i][u]==pd[j]) bb++;
			}
		}
		if(aa!=a[i]||bb!=b[i]){
			return 0;
		} 
	}
	return 1;
}
int main()
{
	while (scanf("%d",&n)&&n!=0)
	{
		scanf("%d",&k);
		for(int i=0;i<k;i++)
			scanf("%d%d%d%d%d%d",&num[i][0],&num[i][1],&num[i][2],&num[i][3],&a[i],&b[i]);
		int xuhao=0;
		for(int q=1;q<=n;q++)
		{
			for(int w=1;w<=n;w++)
			{
				if(q!=w)
				{
					for(int e=1;e<=n;e++)
					{
						if(q!=e&&w!=e)
						{
							for(int r=1;r<=n;r++)
							{
								if(q!=r&&w!=r&&e!=r)
								{
									pd[0]=q;
									pd[1]=w;
									pd[2]=e;
									pd[3]=r;
									
									if(judge()==1)
									{
										ans[xuhao][0]=q;
										ans[xuhao][1]=w;
										ans[xuhao][2]=e;
										ans[xuhao][3]=r; 
										xuhao++;
									}
									memset(pd,0,sizeof(pd));
								}
							}
						}
					}
				}
			}
		} 
		for(int x=0;x<xuhao;x++) printf("%d %d %d %d\n",ans[x][0],ans[x][1],ans[x][2],ans[x][3]);
		printf("%d\n",xuhao);
		xuhao=0;
	}
	return 0;
}
