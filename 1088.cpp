#include<stdio.h>
#define p 10007

int main()
{
	int num = 0;
	
	while (scanf("%d",&num) && num!=-1)
	{
		int result = 1;
		while(num)
		{
			result=num*result%p;
			num--;
		}
		printf("%d\n",result);
	} 
	return 0;
}
