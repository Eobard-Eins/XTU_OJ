#include<stdio.h>
int main()
{
	char a,b;
	int cs=1;  
	 
	while (scanf("%c",&a)&&a!='#')
	{
		char c='A';
		char zc='B';
		int kg = 1;  
		int zckg = 1; 
		getchar ();
		printf("case %d:\n",cs++);
			
		b = a - 'A' +1;
		zc=a+1;
		
		
	
		for (b;b>0;b--)
		{
			
			kg = zckg;
			for (kg;kg>1;kg--)
			{
				printf(" ");
			}
			
			zckg++;
			a=zc-1;
			
			for (c;a>c;c++)
			{
				printf("%c",c);
			}
			                
			zc=c;
			
			for (c;c>='A';c--)
			{
				printf("%c",c);
			}
			
			printf("\n");              
			c=c+1;
					 	
		}
	}
	return 0;
} 
