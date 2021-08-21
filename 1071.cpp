#include<stdio.h>
#include<math.h>
int main()
{
	float a=0;
	float b=0;
	float c=0;
	
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		float d=0;
		float s=0;
		
		d=(a+b+c)/2;
		s=sqrt(d*(d-a)*(d-b)*(d-c)); 
		printf("%.2f",s);
		
	}
	else
	{
		printf("Not a triangle.");
	}
	
	
	
	
	
	return 0;
}
