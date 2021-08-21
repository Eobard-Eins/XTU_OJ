#include<stdio.h>
int main()
{
	
	int num = 0;
	
	scanf("%d",&num);
	while (num > 0)
	{
		int x1,y1,x2,y2,x3,y3;
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		scanf("%d %d",&x3,&y3);
		
		if ((y2-y1)*1.0*(x3-x2) == (y3-y2)*1.0*(x2-x1)||(y2-y1)*1.0*(x3-x1) == (y3-y1)*1.0*(x2-x1))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		num--;
	}
	
	return 0;
} 
