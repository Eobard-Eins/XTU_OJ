#include<stdio.h>
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int n;
		scanf("%d",&n);
		for (int i=n-1;i>0;i--) printf("-");
		printf("\n\\");
		for (int i=n-3;i>0;i--) printf(" ");
		printf("/\n");
		
		int v=1,h=n-5;
		for (int j=(n-2)/2-1;j>0;j--)
		{
			for (int i=v;i>0;i--) printf(" ");
			v++;
			printf("\\");
			for (int i=h;i>0;i--) printf("*");
			printf("/\n");
			h-=2;		
		}
		
		int w=(n-2)/2-1,q=0;
		for (int r=(n-2)/2;r>0;r--)
		{
			for (int i=w;i>0;i--) printf(" ");
			w--;
			printf("/");
			for (int i=q;i>0;i--) printf(" ");
			printf("*");
			for (int i=q;i>0;i--) printf(" ");
			q++;
			printf("\\\n");
		}
		for (int i=n-1;i>0;i--) printf("-");
		printf("\n\n");
		
	}
	return 0;
}
