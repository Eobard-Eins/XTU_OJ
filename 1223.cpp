#include<stdio.h>
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--){
		int m;
		scanf("%d",&m);
		if (m%2==0||m%5==0) printf("0\n");
		else {
			int n=0,j=m,num=1;
			while (j--)
			{
				num%=m;
				n++;
				if (num==0) break;
				num=(num*10%m)%m+1;
			}
			if (num==0) printf("%d\n",n);
			else printf("0\n");
		}
	}
	return 0;
}
