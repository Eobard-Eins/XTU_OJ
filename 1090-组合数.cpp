#include<stdio.h>
#define N 40

__int64 num[N]={0};   //������� 
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
				fz=fz*n0/a;          //�������������ǰһ����������������� 
			
				n0--;
				a++;
			}
			num[i]=fz;
			
		}
		
	/*	for (int k=n,b=0;k>=b;k--,b++)
		{
			num[k]=num[b];          //������������ʽ���һ��������� 
		}
	*/
		printf("2^%d=%I64d",n,num[0]);
		
		for (int m=1;m<=n;m++)       //���2��n�η�=��һ������� 
		{
			printf("+%I64d",num[m]);   //ѭ����� +����� 
		} 
	
		printf("\n");    //����س� 
		
	}
	return 0;
}
