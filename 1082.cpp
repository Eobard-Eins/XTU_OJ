#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main()
{
	
	float a,b;
	b=PI/4;
	a=pow(sin(b),2)+sin(b)*cos(b)-pow(cos(b),2);
	printf("%g\n",a);
	
	
	
	return 0;
}
