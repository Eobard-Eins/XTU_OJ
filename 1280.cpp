#include<stdio.h>
#include<string.h>
#define N 1001
#define M 1000000007
int main()
{
	char str[N];
	while (scanf("%s",&str)!=EOF)
	{
		int num[N]={1};
		for(int i=1;str[i-1]!='\0';i++) num[i]=str[i-1]-'a';//ok
		__int64 sum=0;
		for(__int64 i=strlen(str),k=1;i>=0;i--) {
			sum+=(num[i]*k)%M;
			k=(k*26)%M;
		}
		printf("%I64d\n",sum%M);
	}
	return 0;
} 
