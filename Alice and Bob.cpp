#include<stdio.h>
char str[9];
char str0[9];
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		scanf("%s %s",&str,&str0);
		
	
		
		if ((str[0]=='r'&&str0[0]=='s')||(str[0]=='p'&&str0[0]=='r')||(str[0]=='s'&&str0[0]=='p'))
		{
			printf("Alice\n");
		}
		else if ((str[0]=='r'&&str0[0]=='r')||(str[0]=='p'&&str0[0]=='p')||(str[0]=='s'&&str0[0]=='s'))
		{
			printf("Draw\n");
		}
		else
		{
			printf("Bob\n");
		}
	}
}
