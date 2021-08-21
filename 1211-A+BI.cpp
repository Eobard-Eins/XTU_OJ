#include<stdio.h>
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int a,b,c;
		char d;
		scanf("%d%c%d=%d",&a,&d,&b,&c);
		
		a+b==c?printf("Yes\n"):printf("No\n");
		
		
	}
	return 0;
} 
