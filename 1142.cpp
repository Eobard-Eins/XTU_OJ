#include<stdio.h>
#define N 20001
int num[N] = { 0 };
int main()
{
	int n=0;
	while (scanf("%d", &n) && n != 0)
	{
		
		int shu=1;
		for (int i=0;i<2*n;i++) 
		{
			num[i]=shu;
			shu++;
		}
		int m=2*n-2,b=m+1,k=1;
		while (m != b)
		{
			if (m>=n) m=2*(m-n);
			else if(m<n) m=2*m+1;
			k++;
		}
		printf("%d\n",k);
	}
	return 0;
}
