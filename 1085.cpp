#include<stdio.h>
#include<math.h>
int main()
{
	float xa,ya,xb,yb,a,b,c;
	
	scanf("%f %f %f %f",&xa,&ya,&xb,&yb);
	
	a=pow(xa-xb,2);
	b=pow(ya-yb,2);
	
	c=sqrt(a+b);
	
	printf("%g\n",c);
	return 0;
} 
