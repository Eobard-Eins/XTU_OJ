#include<stdio.h>
#include<math.h>

int main()
{
	int num,x;
	float y;
	scanf("%d",&num);

	
	if(num<0)
	{
		printf("Not define");
	}
	else
	{
		x= num/10;
		switch (x)
		{
			case 0:
				y=cos(num+3.0);
				printf("%.5f",y);
				break;
			case 1:
				y=pow(cos(num+7.5),2);
				printf("%.5f",y);
				break;
			case 2:
				y=pow(cos(num+4.0),4);
				printf("%.5f",y);
				break;
				
			default:
			    printf("Not define");
				break;	
		}
	}
	
	
	
	
	
	return 0;
}
