#include<stdio.h>
int prime(int x)
{
	int num=1;
	int i;
	if (x==1||(x%2==0&&x!=2))
	{
		num=0;
	}
	for (i=3;i*i<=x;i+=2)
	{
		if (x%i==0)
		{
			num=0;
			break;
		}
	}
	return num;
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		__int64 num;
		scanf("%I64d",&num);
		int ten=1,p=1;
		__int64 zc=num;
		while(zc>0)
		{
			if(zc%10==0)
			{
				p=0;
				goto end;
			}
			 ten*=10;
			 zc/=10;
		}
		while(num>0)
		{
			if(prime(num%ten)==0)
			{
				p=0;
				break;
			}
			ten/=10;
			num=num%ten;
		}
		end:
			p==1?printf("Yes\n"):printf("No\n");
	}
	return 0;
}
