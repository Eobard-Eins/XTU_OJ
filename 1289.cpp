#include<stdio.h>
#include<string.h>
#define N 1000000007
#define M 5001
char num[M]={0};
int ans[M][3]={0};
int main()
{
	while(scanf("%s",&num)!=EOF)
	{
		int len=strlen(num);
		ans[len][0]=0;
		ans[len][1]=0;
		ans[len][2]=0;
		for(int i=len-1;i>=0;i--)
		{
			int x=(num[i]-'0')%3;
			switch(x)
			{
				case 0:
					ans[i][0]=(ans[i+1][0]+ans[i+1][0]+1)%N;
					ans[i][1]=(ans[i+1][1]+ans[i+1][1])%N;
					ans[i][2]=(ans[i+1][2]+ans[i+1][2])%N;
					break;
				case 1:
					ans[i][0]=(ans[i+1][0]+ans[i+1][2])%N;
					ans[i][1]=(ans[i+1][1]+ans[i+1][0]+1)%N;
					ans[i][2]=(ans[i+1][2]+ans[i+1][1])%N;
					break;
				case 2:
					ans[i][0]=(ans[i+1][0]+ans[i+1][1])%N;
					ans[i][1]=(ans[i+1][1]+ans[i+1][2])%N;
					ans[i][2]=(ans[i+1][2]+ans[i+1][0]+1)%N;
					break;
			}
		}
		for(int i=0;i<len;i++){
            if(num[i]=='0') ans[0][0]=(ans[0][0]-(ans[i+1][0]+1))%N;
        }
        while(ans[0][0]<0) ans[0][0]+=N;
		printf("%d\n",ans[0][0]);
		
	}
	return 0;
}
