#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int min=0;
	int max=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	
	if(c>max)
	{
		max=c;
	}
	else if(c<min)
	{
		min=c;
	}

	printf("%d %d",max,min);
	
	return 0;
}
