#include<stdio.h>
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
__int64 gcd(__int64 a,__int64 b)
{
	if(a<b)
	{
		__int64 t=a;
		a=b;
		b=t;
	}
	__int64 ans=(a*b)/f(a,b);
	return ans;
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		__int64 fm=gcd(a,a+1);
		for(int i=a+1;i<b;i++) fm=gcd(fm,i+1);
		__int64 fz=0;
		for(int i=a;i<=b;i++) fz+=(fm/i);
		if(fz==fm) printf("1\n");
		else
		{
			__int64 w=f(fz,fm);
			fz=fz/w;
			fm=fm/w;
			printf("%I64d/%I64d\n",fz,fm);
		} 
	}
	return 0;
} 
