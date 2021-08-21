#include<stdio.h>
#include<string.h>

int str[101]={0};
int ans[2][101]={0};
int zc[101]={0};

int chuli(int n)
{
    int p=1,t=0;
    for(int i=1;i<=n;i++){
        if(str[i]==str[i-1]&&i!=n) p++;
        else if(str[i]!=str[i-1]||i==n){
            ans[0][t]=str[i-1];
            zc[t]=str[i-1];
            ans[1][t]=p;
            p=1;
            t++;
        }
    }
    return t;
}

int max0(int a,int b){ 
	return a<b?b:a;
}

int main()
{
    int k;
    for(scanf("%d",&k);k>0;k--)
    {
        int n,c;
        scanf("%d%d",&n,&c);
        for(int i=0;i<n;i++) scanf("%d",&str[i]);
        int t=chuli(n);
        int sum=0,max=0;
        
        for(int i=0;i<t;i++){
        	
        	sum=0;
			if(ans[0][i]==c&&ans[1][i]+1>=3){
				sum+=ans[1][i];
				ans[0][i]=11;

				int flag=1;
				while(flag){ 
					flag=0; 
					for(int j=1;j<t-1;j++){ 
						if(ans[0][j]==11&&ans[0][j-1]!=11){
							int u;
							for(u=j+1;ans[0][u]==11&&u<t;u++);
							if(ans[0][u]==ans[0][j-1]&&ans[1][u]+ans[1][j-1]>=3){
								sum+=ans[1][u]+ans[1][j-1];
								ans[0][u]=11;
								ans[0][j-1]=11;
								flag=1; 
							}
						
						}
					}
				}
				
				for(int w=0;w<t;w++) ans[0][w]=zc[w];
				max=max0(sum,max);
			}
		}
		
		printf("%d\n",max);
		memset(str,0,sizeof(str));
		memset(ans,0,sizeof(ans));
		memset(zc,0,sizeof(zc));
    }
    return 0;
}
