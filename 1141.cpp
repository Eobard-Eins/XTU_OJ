#include<stdio.h>
int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--){
		int num[25]={0},n,i=0;
		scanf("%d",&n);
		if (n==0) {
			printf("0\n");
			continue;
		}
		while(n){
			num[i]=n%3;
			n=n/3;
			i++;
		}
		num[i]=0;
		for (int j=0;j<i;j++){
			if(num[j]==2){
				num[j+1]++;
			}
			else if(num[j]==3){
				num[j]=0;
				num[j+1]++;
			}
		}
		char str[25];
		for(int j=0,u=i;j<=i;j++){
			if(num[u]<=1) str[j]=num[u]+'0';
			if (num[u]==2) str[j]='-';
			u--;
		}
		//printf("%c***",str[1]);
		if (str[0]!='0'){
			for (int j=0;j<=i;j++){
				printf("%c",str[j]);
			}	
		}
		if (str[0]=='0'){
			for (int j=1;j<=i;j++){
				printf("%c",str[j]);
			}	
		}
		printf("\n");
	}
	return 0;
}
