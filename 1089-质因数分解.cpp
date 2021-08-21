#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int t=0;
		for (int i=2;i<=n;i++)
		{
			if (i>2&&i>sqrt(n))
			{
				t>=1?printf("*%d",n):printf("%d",n);
				goto end;
			}
			int k=0,y=n;
			if (n%i==0) t++;
			while (n%i==0)
			{
				n/=i;
				k++;
				//printf("kkk%d\n",i);
			}
			if(t>1&&y%i==0) printf("*");
			if (k>0) printf("%d",i);
			if(k>1) printf("^%d",k);
			if (n==1) break;
		}
		end: printf("\n");
	}
	return 0;
}
