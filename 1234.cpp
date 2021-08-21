#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		char str[32];
		scanf("%s",str);
		if (!(strcmp(str,"auto")&&strcmp(str,"break")&&strcmp(str,"case")&&strcmp(str,"char")&&strcmp(str,"const")&&strcmp(str,"continue")&&strcmp(str,"default")&&strcmp(str,"do")&&
		strcmp(str,"double")&&strcmp(str,"else")&&strcmp(str,"enum")&&strcmp(str,"extern")&&strcmp(str,"float")&&strcmp(str,"for")&&strcmp(str,"goto")&&strcmp(str,"if")&&
		strcmp(str,"int")&&strcmp(str,"long")&&strcmp(str,"register")&&strcmp(str,"return")&&strcmp(str,"short")&&strcmp(str,"signed")&&strcmp(str,"sizeof")&&strcmp(str,"static")&&
		strcmp(str,"struct")&&strcmp(str,"switch")&&strcmp(str,"typedef")&&strcmp(str,"union")&&strcmp(str,"unsigned")&&strcmp(str,"void")&&strcmp(str,"volatile")&&strcmp(str,"while")))
		{
			printf("No\n");
			continue;
		}
		if (str[0]<='9')
		{
			printf("No\n");
			continue;
		}
		int n=0,i;
		for (i=0;str[i]!='\0';i++)
		{
			if(str[i]=='_'||('0'<=str[i]&&str[i]<='9')||('A'<=str[i]&&str[i]<='Z')||('a'<=str[i]&&str[i]<='z')) n++;
		}
		i==n?printf("Yes\n"):printf("No\n");
	}
	return 0;
}
