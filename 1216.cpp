#include<stdio.h>
#include<string.h>
int luomazhuanhuan(char c)
{
	switch (c)
	{
		case 'I':
			return 1;
			break;
		case 'V':
			return 5;
			break;
		case 'X':
			return 10;
			break;
		case 'L':
			return 50;
			break;
		case 'C':
			return 100;
			break;
		case 'D':
			return 500;
			break;
		case 'M':
			return 1000;
			break; 
	}
}
int main()
{
	char str[26];
	while (scanf("%s",&str)!=EOF)
	{
		int num[26]={0};
		for(int i=0;str[i]!='\0';i++) num[i]=luomazhuanhuan(str[i]);
		for(int i=0;i<strlen(str)-1;i++)
		{
			if (num[i]<num[i+1]) num[i]=0-num[i];
		}
		int sum=0;
		for(int i=0;i<strlen(str);i++) sum+=num[i];
		printf("%d\n",sum);
	}
	return 0;
}
