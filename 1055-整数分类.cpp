#include<stdio.h>
#define N 501
int num[N]={0};
char str[N];
int main()
{
	while (scanf("%s",&str)&&str[0]!=48)
	{
		int weishu=0;
		for (int i=0;str[i]!='\0';i++)
		{
			num[i]=str[i]-48;
			weishu++;
		}
		
		for (int i=weishu-1;i>=1;i--)
		{
			num[i-1]+=num[i];
			while (num[i-1]/10!=0)
			{
				num[i-1]=num[i-1]%10+1; 
			}
		}
		printf("%d\n",num[0]);
	}
	return 0;
}
