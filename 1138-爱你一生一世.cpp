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
	if (x==1)
	{
		return x0;
	}
	else
	{
		x0=x0/x;
		return x0;
	}
	
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
	if (x==1)
	{
		return y0;
	}
	else
	{
		y0=y0/x;
		return y0;
	}
	
}
int main()
{
    int k;
    for (scanf("%d",&k);k>0;k--)
    {
        int n,m,fm,fz,p;
        scanf("%d%d",&n,&m);
        fm=n*(n-1)/2;
        fz=m*(m-1)/2;
        p=fm-fz;
        if (fm==p || p==0)
        {
              p==0?printf("0\n"):printf("1\n");
        }
        else
        {
               int p0,fm0;
               p0=numerator(p,fm);
               fm0=denominator(p,fm);
              
               printf("%d/%d\n",p0,fm0);
         }
    }


    return 0;
}

