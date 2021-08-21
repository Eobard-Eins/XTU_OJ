#include<stdio.h>
int main()
{
	int k;
	while (scanf("%d",&k)!=EOF)
	{
		int num[5]={0};
		if(k==10000) {
			printf("MMMMMMMMMM\n");
			continue;
		}
		for(int i=0;i<4;i++,k/=10) num[i]=k%10;
		for(int i=num[3];i>0;i--) printf("M");
		if (num[2]==4||num[2]==9) num[2]==4?printf("CD"):printf("CM");
		else{
			if (num[2]>=5){
				printf("D");
				for(int i=num[2]-5;i>0;i--) printf("C");
			}
			else{
				for(int i=num[2];i>0;i--) printf("C");
			}
		}
		if (num[1]==4||num[1]==9) num[1]==4?printf("XL"):printf("XC");
		else{
			if (num[1]>=5){
				printf("L");
				for(int i=num[1]-5;i>0;i--) printf("X");
			}
			else{
				for(int i=num[1];i>0;i--) printf("X");
			}
		}
		if (num[0]==4||num[0]==9) num[0]==4?printf("IV"):printf("IX");
		else{
			if (num[0]>=5){
				printf("V");
				for(int i=num[0]-5;i>0;i--) printf("I");
			}
			else{
				for(int i=num[0];i>0;i--) printf("I");
			}
		}
		printf("\n");
	}
	return 0;
}
