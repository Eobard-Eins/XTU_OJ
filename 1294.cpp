#include<stdio.h>
#define N 10001
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		char str[N];
		scanf("%s",&str);
		int p;
		for(scanf("%d",&p);p>0;p--)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			int num=0;
			for(int i=a-1;i<b-1;i++){
				if(str[i]!=str[i+1]) num++;
			}
			printf("%d\n",num);
		}
	}
	return 0;
} 
