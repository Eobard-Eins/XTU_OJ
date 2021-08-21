#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		char a[11],b[11];
		scanf("%s",&a);
		scanf("%s",&b);
		printf("%c",a[0]);
		for(int i=strlen(b)-1,j=1;i>=0;i--,j++) printf("%c%c",b[i],a[j]);
		printf("\n");
	}
	return 0;
} 
