#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100001
int num[N][2]={0},len[N]={0};
int cmp(const void*a,const void*b)
{
	return ((int*)a)[0]-((int*)b)[0];
}
int main()
{
    int k;
    while(scanf("%d",&k)&&k!=0)
    {
    	int x0,y0,p=0;
    	for(int i=0;i<k;i++){
    		scanf("%d%d",&x0,&y0);
    		num[i][0]=x0;
    		num[i][1]=y0;
    	}
    	qsort(num,k,sizeof(int)*2,cmp);
    	for(int i=0;i<k;i++)
    	{
    		if(num[i][1]<num[i+1][0]){
    			len[p]=num[i][1]-num[i][0];
    			p++;
    		}
    		else{
    			int zc,flag=0;
    			for(int j=i+1;j<=k-1;j++){
    				if(num[i][1]>=num[j][0]&&num[i][1]<=num[j][1]){
    					zc=j;
    					flag=1;
    					break;
    				}    				
    			}
    			if(flag){		
	    			len[p]=num[zc][0]-num[i][0];
	    			p++;
	    			i=zc-1;
    			}
    			else{
    				len[p]=num[i][1]-num[i][0];
    				p++;
    				i=k;
    			} 
    		}
    	}
    //	for(int i=0;i<p;i++) printf("%d ",len[i]);
    //	printf("\n");
    	int sum=0;
    	for(int i=0;i<p;i++) sum+=len[i];
    	printf("%d\n",sum);
    }
    return 0;
}
