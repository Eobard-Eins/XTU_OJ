#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	while(scanf("%s",&str)!=EOF)
	{
		if(strlen(str)==1) {
			printf("1\n");
			continue;
		}
		int max=0,u=0;
		for(int i=u;i<strlen(str)-1;i++)
		{
			int j,p=1;
			for(j=i;str[j]+1==str[j+1];j++) p++;
			u=j+1;
			p>max?max=p:max=max;
		}
		printf("%d\n",max);
	}
	return 0;
}
