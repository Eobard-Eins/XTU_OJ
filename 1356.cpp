#include<stdio.h>
#define N 101
int ud[5]={0,-1,0,1,0},lr[5]={-1,0,1,0,-1};//方向控制-上下-左右
char mi[N][N]={0};
int f[N][N][N]={0};
void chushihua()
{
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			mi[i][j]=0;
			for(int k=0;k<N;k++) f[i][j][k]=0;
		}
	}
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		chushihua();
		int n,m,s;
		scanf("%d%d%d",&n,&m,&s);
		for(int i=0;i<n;i++) scanf("%s",&mi[i]);

		int a,b,x,y,q=0,w=0,sum=0;//起点坐标 - 终点坐标 
		if(n==1&&m==1) printf("Impossible\n");
		else{
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(mi[i][j]=='S'){
						a=i;
						b=j;
					}
					if(mi[i][j]=='E'){
						x=i;
						y=j;
					}
				}
			}
			int flag=0;
			while(a!=x||b!=y)
			{
				if(mi[a+ud[s]][b+lr[s]]=='.'||mi[a+ud[s]][b+lr[s]]=='E'||mi[a+ud[s]][b+lr[s]]=='S'){
					flag=0;
					a=a+ud[s];
					b=b+lr[s];
					if(f[a][b][s]==1){
						sum=-1;
						break;
					}
					sum++;
					f[a][b][s]=1;
				}
				else{
					s=(s+1)%4;
					flag++;
					if(flag==4){
						sum=-1;
						break;
					}
				}
			}
			sum!=-1?printf("%d\n",sum):printf("Impossible\n");
		}

	}
	return 0;
}
