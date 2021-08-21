#include<stdio.h>
#include<string.h>
char str[11]={0};
int ans[2][11]={0};
int chuli(int n)
{
    int p=1,t=0;
    for(int i=1;i<=n;i++){
        if(str[i]==str[i-1]&&i!=n) p++;
        else if(str[i]!=str[i-1]||i==n){
            ans[0][t]=str[i-1]-'A'+1;
            ans[1][t]=p;
            p=1;
            t++;
        }
    }
    return t;
}
void jiaohuan(int m)
{
	int y=m,i=0;
	for(i=0;y>0;i++) y-=ans[1][i];
	if(y==0){
		
	}
}
int main()
{
    int k;
    for(scanf("%d",&k);k>0;k--)
    {
        scanf("%s",&str);
        int t=chuli(strlen(str));
        int n;
        for(scanf("%d",&n);n>0;n--)
        {
        	int m;
        	scanf("%d",&m);
        	for()
        }
    }
    return 0;
}
