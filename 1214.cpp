#include<stdio.h>
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int m,n,sum;
		scanf("%d%*c%d=%d",&m,&n,&sum);
		int x=m,y=n,a=0,b=0;
		while (m+n<sum) {
			m*=10;
			a++;
		}
		while (x+y<sum) {
			y*=10;
			b++;
		}
		if(m+n==sum) printf("%d\n",a);
		else printf("-%d\n",b);
	}
	return 0;
}
