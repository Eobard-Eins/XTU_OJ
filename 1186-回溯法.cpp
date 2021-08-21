#include<stdio.h>
const int maxn=10;
int w[maxn][maxn],ans[maxn][maxn];
int vis[maxn];
int way[maxn];
int n,mind,cnt;

void dfs(int d,int k,int num){
    if (num==n){
        int t=d+w[k][0];
        if(t>mind)
            return;
        if(t==mind&&cnt<9){
            cnt++;
            for(int i=1;i<=n;i++)
                ans[cnt][i]=way[i];
        }
        else if(t<mind){
            cnt=0;
            mind=t;
            for (int i=1;i<=n;i++)
                ans[cnt][i]=way[i];
        }
        return;
    }
    for (int i=1;i<=n;i++)
        if (!vis[i]&&d+w[k][i]<mind){
            vis[i]=1;
            way[num+1]=i;
            dfs(d+w[k][i],i,num+1);
            vis[i]=0;
        }
}

int main(){

 	int k;
	for(scanf("%d",&k);k>0;k--){
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                scanf("%d",&w[i][j]);
        mind=999999999;
        dfs(0,0,0);
        printf("%d\n",mind);
        for (int i=0;i<=cnt;i++){
            for (int j=1;j<n;j++)
                printf("%d ",ans[i][j]);
            printf("%d\n",ans[i][n]);
        }
    }
    return 0;
}

