#include<stdio.h>
#include<math.h>

int main()
{
	float result=0;
	
	result=1.0+1.0/(1.0+1.0/(1.0+1.0/5.0));
	//1.0/5和1/5结果不同！！！！！！！！！！！ 
	printf("%g\n",result);
	
	return 0;
}
