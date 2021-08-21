#include<stdio.h>
#define N 40

__int64 num[N]={0};   //存组合数 
int main()
{
	int n;
	while (scanf("%d",&n)&&n>=0)
	{
		for (int i=0;i<=n/*/2+1*/;i++)
		{
			__int64 fz=1;
			int n0=n,a=1;
			for (int j=i;j>0;j--)
			{
				fz=fz*n0/a;          //将所有组合数的前一半算出来并存入数组 
			
				n0--;
				a++;
			}
			num[i]=fz;
			
		}
		
	/*	for (int k=n,b=0;k>=b;k--,b++)
		{
			num[k]=num[b];          //由组合数的性质将另一半存入数组 
		}
	*/
		printf("2^%d=%I64d",n,num[0]);
		
		for (int m=1;m<=n;m++)       //输出2的n次方=第一个组合数 
		{
			printf("+%I64d",num[m]);   //循环输出 +组合数 
		} 
	
		printf("\n");    //输出回车 
		
	}
	return 0;
}
