#include<stdio.h>
#include<math.h> 
int main()
{
	int num,b,zc,zc2;
	while (scanf("%d",&num)&&num!=0)
	{
		int a=0;
		int c=1;
		int d=0;
		
		zc=num;
		zc2=num;
		for (num;num>0;num/=10)
		{
		a++;
	}
		c=a;
		
		for (a;a>0;a--)
		{
		b=zc%10;
		
		zc/=10;
		
		d=d+pow(b,c);
		
	}
		
		if (zc2==d)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}

	return 0;
}
