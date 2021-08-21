#include <stdio.h>

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

int mult(int x,int y)     //求最小公倍数 
{
	int z,start,end;
	start = x*y;
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
	end = start/x;
	return end;
}

int main()
{
	int num;
	for (scanf("%d",&num);num>0;num--)
	{
		int a,b,c,d,di,fzh,fzc,fm1,fm2;
		int result_1,result_2;
		int a0,b0,c0,d0,di0,fzh0,fzc0;
		
		scanf("%d %d %d %d",&a,&b,&c,&d);
		a0=a;
		b0=b;
		c0=c;
		d0=d;
		
		di=mult(b0,d0);
		
		fzh=a*(di/b)+c*(di/d);
		fzc=a*(di/b)-c*(di/d);
		
		fzh0=fzh;
		fzc0=fzc;
		
	//	printf("nnn%d\n",di);
		fzh=numerator(fzh0,di);
		fzc=numerator(fzc0,di);
		
	//	printf("nnn%d\n",di);
		
		fm1=denominator(fzh0,di);
		fm2=denominator(fzc0,di);
		
		if (fzh%fm1==0)
		{
			printf("%d ",fzh/fm1);
		}
		else
		{
			printf("%d/%d ",fzh,fm1); 
		}
		
		if (fzc%fm2==0)
		{
			printf("%d\n",fzc/fm2);
		}
		else
		{
			printf("%d/%d\n",fzc,fm2); 
		}
	}
	return 0;
} 
