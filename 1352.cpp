#include<stdio.h>
#define N 100
__int64 num[N]={0};
__int64 f(__int64 a,__int64 b)
{
	__int64 x;
	while(b)
	{
		x=a%b;
		a=b;
		b=x;
	}
	return a;
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		__int64 a,b;
		scanf("%I64d%I64d",&a,&b);
		__int64 w=f(b,a);
		a=a/w;
		b=b/w;
		int j=0;
		while(a!=1)
		{
			__int64 i=(b+a-1)/a;
			num[j]=i;
			j++;
			__int64 fm=b*i;
			__int64 fz=(a*i)-b;
			__int64 w=f(fm,fz);
			a=fz/w;
			b=fm/w;
		}
		num[j]=b;
		printf("%I64d",num[0]);
		for(int i=1;i<=j;i++) printf(" %I64d",num[i]);
		printf("\n");
	}
	return 0;
}
