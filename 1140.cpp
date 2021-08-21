#include<stdio.h>
#include<string.h>
int cf(int x,int y)
{
	int z=1;
	for (int i=y;i>0;i--) z*=x;
	return z;
}
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		char str[33];
		int num[33]={0};
		scanf("%s",&str);
		for(int i=0;str[i]!='\0';i++) str[i]=='-'?num[i]=-1:num[i]=str[i]-'0';
		int j=0,sum=0;
		for(int i=strlen(str)-1;i>=0;i--,j++) sum+=num[i]*cf(3,j);
		printf("%d\n",sum);
	}
	return 0;
}
