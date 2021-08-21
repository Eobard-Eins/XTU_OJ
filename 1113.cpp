#include<stdio.h>
int main()
{
	int JH=0;
	int x,y,X,Y;
	scanf("%d",&JH);
	
	while (JH>0)
	{
		scanf("%d %d",&x,&y);
		scanf("%d %d",&X,&Y);
		if (X>y or Y<x)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
		JH--;
	}
	return 0;
} 
