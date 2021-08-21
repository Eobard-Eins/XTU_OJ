#include<stdio.h>
#include<ctype.h>
#define N 201
int main()
{
	char str[N];
	while(gets(str))
	{
		int num[26]={0},kg=0;
		for(int i=0;str[i]!='\0';i++)
		{
			if(islower(str[i])) str[i]=toupper(str[i]);
			if(str[i]!=' ') num[str[i]-'A']++;
			if(str[i]==' ') kg++;
		}
		int sum=0;
		for(int i=0;i<26;i++){
			if (num[i]!=0) sum++;
		}
		(kg>9||sum>10)?printf("No\n"):printf("Yes\n");
	}
	return 0;
} 
