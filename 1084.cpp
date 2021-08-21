#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
int main()
{
	float a,b;
	float P,c,thete;
	
	scanf("%f %f %f",&a,&b,&P);
	thete = P*PI/180;
	c = sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(thete));
	
	printf("%g\n",c); 
	return 0;
}
