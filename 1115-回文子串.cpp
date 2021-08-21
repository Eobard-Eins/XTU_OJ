#include<stdio.h>
#define N 201
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		char str[N],in[N];
		int k,m;//第k个开始，m个字符 
		scanf("%s",&in);
		scanf("%d%d",&k,&m);
		for (int i=0,j=k-1;i<m;i++,j++) str[i]=in[j];
		int a=0,b=m-1,num=0;
		while (a<b)
		{
			if (str[a]!=str[b]) break;
			a++;
			b--;
			num++;
		}
		num==m/2?printf("Yes\n"):printf("No\n");
		
	}
	return 0;
} 
