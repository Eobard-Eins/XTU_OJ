#include<stdio.h>
int main()
{
	char a[1001];
	while(scanf("%s",&a)!=EOF)
	{
		int num[26]={0};
		for(int i=0;a[i]!='\0';i++) num[a[i]-'a']++;
		int sum=0;
		for(int i=0;i<26;i++) num[i]%2==0?sum++:sum=sum;
		(sum==26||sum==25)?printf("Yes\n"):printf("No\n");
	}
	return 0;
}
