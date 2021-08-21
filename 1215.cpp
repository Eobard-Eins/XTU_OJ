#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		char c1[10]={0},c2[10]={0};
		int a[10]={0},b[10]={0}; 
		scanf("%s",&c1);
		scanf("%s",&c2);
		int lena=strlen(c1),lenb=strlen(c2);
		for (int i=0;i<lena;i++) a[i]=c1[i]-48;
		for (int i=0;i<lenb;i++) b[i]=c2[i]-48;
		int min=(lena<lenb?lena:lenb),max=(lena<lenb?lenb:lena),m=max-min;
		for (int i=0;i<min;i++,m++) lena<lenb?b[m]=(b[m]+a[i])%10:a[m]=(a[m]+b[i])%10;
		int j=0;
		for (int i=0;i<max;i++) {
			if ((lena<lenb?b[i]:a[i])!=0) j=1;
			if (j==1) lena<lenb?printf("%d",b[i]):printf("%d",a[i]);
		}
		if(j==0) printf("0");
		printf("\n");
	}
	return 0;
}
