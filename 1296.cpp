#include<stdio.h>
int main()
{ 	
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		__int64 a,b;
		scanf("%I64d %I64d",&a,&b);
		__int64 x=(a-1)/2+(a-1)/3-(a-1)/6,y=b/2+b/3-b/6;
		printf("%I64d\n",b-a+1-(y-x));
	}
	return 0;
}
