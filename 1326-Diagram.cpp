#include<stdio.h>
#define N 1001
int gcd(int x,int y)     //�����Լ�� 
{
	if (x<y)
	{
		int t=y;
		y=x;
		x=t;
	}
	int z; 
	while (y!=0)
	{
		z = x % y;
		x=y;
		y=z;
	}
	return x;
}
int main()
{
	char str[N]={0};
	while (scanf("%s",&str)!=EOF)
	{
		char zhi[N][26];
		int num[26]={0},xh[26]={0};
		for (int i=0;str[i]!='\0';i++)
		{
			int a=str[i]-'A';//��¼�����ַ������� 
			num[a]++;
		}
		int r=0;//���ٸ���ĸ 
		for (int i=0;i<=25;i++)
		{
			if(num[i]!=0)
			{
				xh[r]=num[i];
				r++;
			}
		}
		if(r>1)
		{
			int s;
			s=gcd(xh[0],xh[1]);//�ҳ������������Լ�� 
			for (int i=2;i<r;i++) 
			{
				s=gcd(s,xh[i]);
				if (s==1) break;
			}
			for (int i=0;i<r;i++) xh[i]/=s;
		}
		else xh[0]=1; 
		int max=0;                         
		for (int i=0;i<r;i++) xh[i]>max?max=xh[i]:max=max;//��¼��ֵ�������� 
		for (int j=0;j<r;j++)  
		{
			for (int i=max-1;i>=max-xh[j];i--) zhi[i][j]='*';  //�洢�Ǻ�
			if (xh[j]!=max) 
			{
				for (int i=max-xh[j]-1;i>=0;i--) zhi[i][j]=' ';//����ո� 
			} 
		}
		for (int i=0;i<max;i++)//���y�� 
		{
			int k=r-1;
			for (k;zhi[i][k]==' ';k--); 
			 
			for (int j=0;j<=k;j++) printf("%c",zhi[i][j]);
			printf("\n");
		}	
		for (char out='A';out<='Z';out++) //x������� 
		{
			int a=out-'A';
			if (num[a]!=0) printf("%c",out);
		}
		printf("\n\n");
	} 
	return 0;
}
