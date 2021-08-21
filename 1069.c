#include<stdio.h>

int main()
{
	int num1=0;
	int num2=0;
	
	scanf("%d",&num1);
	num2 = num1 % 2;
		
	if(num2 == 0)
	{
		printf("%d is even.",num1);
	}
	else
	{
		printf("%d is odd.",num1);
	}
	
	return 0;
}
