#include<stdio.h>
int main()
{
	int x,a,b,c;
	
	scanf("%d",&x);
	
	a = x / 100;
	b = x%100/10;
	c = x%100%10;
	
	if (a==b && b!=c)
	{
		printf("Yes");
	}
	else if (a==c && c!=b)
	{
		printf("Yes");
	}
	else if (b==c && a!=b)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
} 
