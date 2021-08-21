#include<stdio.h>
int numerator(int x,int y)    //分数化简-分子部分 
{
	int x0,y0,z; 
	
	x0 = x;
	y0 = y;
	
	while (y!=0)
	{
		z = x % y;
		x=y;
		y=z;
	}
	if(x<0)
	{
		x=0-x; 
	}

	x0=x0/x;
	return x0;

	
}


int denominator(int x,int y)    //分数化简-分母部分 
{
	int x0,y0,z; 
	
	x0 = x;
	y0 = y;
	
	while (y!=0)
	{
		z = x % y;
		x=y;
		y=z;
	}
	if(x<0)
	{
		x=0-x; 
	} 

	
	
	y0=y0/x;
	return y0;

	
}
int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int n,m;
		int fz,fm,fz0,fm0;
		scanf("%d %d",&n,&m);
	
			
			
		fm = n*(n-1)*(n-2)/6;
		fz = m*(m-1)*(m-2)/6;
		
		
		if (fz==0)
		{
			printf("0\n");
		}
		else
		{
			fz0=numerator(fz,fm);
			fm0=denominator(fz,fm);
			fm0==1?printf("1\n"):printf("%d/%d\n",fz0,fm0);
		}
		
	}
	return 0;
}
