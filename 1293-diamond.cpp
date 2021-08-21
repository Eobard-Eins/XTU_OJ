#include<stdio.h>

int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int n;
		scanf("%d",&n);
		
		int kg=n-1;
		int cnum=1;
		int kg0=kg;
		for (int i=n;i>0;i--) //ÉÏ°ë²¿·Ö 
		{
			for (int j=kg0;j>0;j--)
			{
				printf(" ");
			}
			kg0--;
			char c = 'A'+kg;
			for (int k=cnum;k>0;k--)
			{
				
				printf("%c",c);
				c--;
			}
			char c0=c+2;
			for (int k=cnum;k>1;k--)
			{
				printf("%c",c0);
				c0++;
			}
			printf("\n");
			cnum++;
			
		}
		
		int kg_xia=1;
		int hhh=kg;
		for (int i=n-1;i>0;i--)
		{
			
			int j=kg_xia;
			
			
			for (j;j>0;j--)
			{
				printf(" ");
			}
			kg_xia++;
			
			
			char c = 'A'+kg;
			for (int k=hhh;k>0;k--)
			{
				
				printf("%c",c);
				c--;
			}
			
			char c0=c+2;
			for (int k=hhh;k>1;k--)
			{
				printf("%c",c0);
				c0++;
			}
			printf("\n");
			hhh--;
			
		}

		
		
		
	}
	
	return 0;
} 
