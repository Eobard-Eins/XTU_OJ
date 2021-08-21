#include<stdio.h>
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int num;
		scanf("%d",&num);
		if(num%11!=0) printf("0\n");
		else
		{
			int sum=0;
			for(num/=11;num!=0;sum++){
				if(num>=101){
					int a=num%91,b=num%101;
					a<b?num-=91:num-=101;
				}
				else if(num>=91) num-=91;
				else num--;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
