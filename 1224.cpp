#include<stdio.h>
#include<string.h>
#define N 1001
char str[N]={0};
__int64 num[5]={0};
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		memset(str,0,sizeof(str));
		memset(num,0,sizeof(num));
		scanf("%s",&str);
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='L') num[0]++;
			if(str[i]=='O') num[1]+=num[0];
			if(str[i]=='V') num[2]+=num[1];
			if(str[i]=='E') num[3]+=num[2];
		}
		printf("%I64d\n",num[3]%1000000007);
	}
	return 0;
}
