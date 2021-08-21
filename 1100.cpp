#include<stdio.h> 

int main()
{
	unsigned int jihui;
 	float gao;
	float di;
	float s;
	
	scanf("%d",&jihui);
	while (jihui>0)
	{
		scanf("%f %f",&di,&gao);
		s = di * gao /2.0;
		printf("%.1f\n",s);
		jihui--;
	}
	return 0;
}
