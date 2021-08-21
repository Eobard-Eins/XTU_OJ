#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	while (num>0)
	{
		getchar(); 
		char ch;  //输入字符
		scanf("%c",&ch);
		int i=1; //首行空格
		int j=0; //第二行空格
		int a,a0;  //输入字符与A的差 
		char aa='A';
		char aa0;
		int cifu_2,chongfu,cengshu,i0,j0;
		
		
		a=ch-'A';
		a0=a;
		i+=a;
		i0=i;;
		chongfu=3;
		aa0=aa;
		j0=j;
		
		for (cengshu=a+1;cengshu>0;cengshu--)
		{
		
			for (i;i>0;i--)   //空格（首行） 
			{
				printf(" ");
			} 
			i=i0;
			
			printf("%c\n",aa);
			aa++;
			
			for (j;j<a0;j++)//第二行空格
			{
				printf(" ");   
			}
			a0--;
			j=j0;
			for (cifu_2=0;cifu_2<chongfu;cifu_2++)
			{
				printf("%c",aa0);
			}
			printf("\n");
			aa0++;
			chongfu+=2;
		}
		num--;
	}
	return 0;
}
