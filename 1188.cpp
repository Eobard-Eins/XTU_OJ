#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100001
int a[N]={0};
void chushihua(int n)
{
	for(int i=0;i<n;i++) a[i]=0;
}
int cmp(const void*a,const void*b )
{
	return *(int*)a-*(int*)b;
}
int main()
{
    int n,m;
    while (scanf("%d%d",&n,&m)!=EOF)
    {
	    for(int i=0;i<n;i++) scanf("%d",&a[i]);
	    qsort(a,n,sizeof(a[0]),cmp);
	    for(int k=m;k>0;k--)
	    {
	        int x;
	        scanf("%d",&x);
	        if(x<=a[0]){
	        	printf("1\n");
	        	continue;
	        }
	        else if(x>a[n-1]){
	        	printf("%d\n",n+1);
	        	continue;
	        } 
	        else{
	        	  __int64 min=0,max=n,mid=(max+min)/2;
		        while (x!=a[mid])
		        {
		            mid=(max+min)/2;
		            if(x>a[mid]) min=mid;
		            else if(x<a[mid]) max=mid;
		            if(min==max-1){
		                mid=max;
		                break;
		            }
		        }
		        while (a[mid-1]==a[mid]) mid--;
		        printf("%d\n",mid+1);
	        }
	    }
	    chushihua(n);
	}
    return 0;
}
