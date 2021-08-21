#include<stdio.h>
#include<string.h>
#define N 205
char sss[N],str[N],ctr[N];
void guiling(char a[],char b[],char c[])
{
	for(int i=0;i<N;i++){
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
}
int match(char a[],char b[])//STR SSS
{
	int p=1;
	for(int i=0;i<strlen(a);i++){
		p=1;
		for(int j=i,u=0;u<strlen(b);u++,j++){
			if(j==strlen(a)) j=0;
			if(b[u]!=a[j]){
				p=0;
				break;
			}
		}
		if(p) break;
	}
	return p;
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--){
		
		scanf("%s",&str);
		scanf("%s",&sss);
		int p=strlen(str),pp=p,g,f;
		for(g=0,f=strlen(str)-1;f>=0;g++,f--) ctr[g]=str[f];
		ctr[g]='\0';
		if(match(str,sss)||match(ctr,sss)) printf("Yes\n");
		else printf("No\n"); 
		guiling(str,sss,ctr);
	}
	return 0;
}
