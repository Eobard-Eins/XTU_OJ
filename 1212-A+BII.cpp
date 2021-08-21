#include<stdio.h>
int main()
{
	int cs;   //层数 
	while (scanf("%d",&cs) && cs!=0)
	{
		getchar();
		for (int a=cs;a>1;a--)
		{
			putchar(' ');         //第一行 
		}
		printf("1\n");
		
		cs--;
		int a=cs;
		for (int i=0;i<cs;i++)
		{
			for (int a0=a;a0>1;a0--)
			{
				putchar(' ');  
			}
			a--;
			int num1=1;
			for (int x=0;x<=i;x++)
			{
				
				printf("%d",num1++);
			}
			putchar('+');
			for (int x0=0;x0<=i;x0++)
			{
				
				printf("%d",--num1);
			}
			printf("\n");
		}
	}
	
	return 0;
}
