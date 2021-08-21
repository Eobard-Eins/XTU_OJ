#include<stdio.h>
#include<string.h>
#define N 1001
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		char str[N];
		scanf("%s",&str);
		int i=0,len=strlen(str)/2;
		for(i=len;i>=0;i--)
		{
			for(int j=0;j+2*i<=strlen(str);j++)
			{
				int p=1;
				for(int u=j;u<j+i;u++)
				{
					if(str[u]!=str[u+i])
					{
						p=0;
						break;
					}
				}
				if(p) goto end;
			}
		}
		end:
		printf("%d\n",2*i);	
	}
	return 0;
}
