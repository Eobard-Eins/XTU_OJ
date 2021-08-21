#include<stdio.h>
#define N 10001
int q[N]={0};
int max0(int a,int b){
	return a<b?b:a;
}
int main()
{
	int k;
	for(scanf("%d",&k);k>0;k--)
	{
		int n,m,sum=0,max=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&q[i]);
			sum+=q[i];
			max=max0(max,q[i]);
		}
		int sum_now=0,day=0,mid=0;
		while(max<=sum){
			mid=(sum+max)/2;
			day=0;
			sum_now=0;
			for(int i=0;i<n;i++){
				if(sum_now+q[i]<=mid){
					sum_now+=q[i];
				}
				else{
					sum_now=q[i];
					day++;
				}
			} 
			if(day>=m){
				max=mid+1;
			}
			else{
				sum=mid-1;
			}
		}
		printf("%d\n",max);
	}
	return 0;
} 
