#include<stdio.h>
int gcd(int x,int y)
{
	int t;
	if (x<y){
		t=y;
		y=x;
		x=t;
	}
	int z;
	while (y)
	{
		z=x%y;
		x=y;
		y=z;
	} 
	return x;
}
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int m,n,x,fz,fm;
		scanf("%d%d",&n,&m);
		x=m+n;
		fz=m*n*2;
		if(fz==0) {
			printf("0\n");
			continue;
		}
		fm=x*(x-1);
		int d=gcd(fz,fm);
		fz/=d;
		fm/=d;
		fz==fm?printf("1\n"):printf("%d/%d\n",fz,fm);
	}
	return 0;
}
