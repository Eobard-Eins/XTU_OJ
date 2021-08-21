#include<stdio.h>
#include<math.h>
#define N 1000001
int a[N]={1,1},b[N]={0},shuju[N]={0};
void aishai()
{
	int t=0;
    for(int i=0;i<1010;i++)//埃筛  素数存入b[N] 
    {
        if(!a[i])
        {
            b[t]=i;
            t++;
            for(int j=i+i;j<N;j+=i) a[j]=1;
        }
    }
}
void heshu()
{
	for(int k=1;k<N;k++)
	{
		int i;
	    for(i=0;b[i]<sqrt(k);i++)
	    {
	        if(k%b[i]==0)//找出较小的素数因子 
	        {
	            int y=k/b[i],h=1;
	            for(int j=0;b[j]<=sqrt(y);j++)//判断另一因子是否为素数 
	            {
	                if(y%b[j]==0){
	                    h=0;
	                    break;
	                }
	            }
	            if(h){
	            	shuju[k]=shuju[k-1]+1;
	            	break;//是合数 
	            }
	            else{
	                continue;
	            }
	        }
	    }
	    if(b[i]>=sqrt(k)) shuju[k]=shuju[k-1];//计数 
	}
}
int main()
{
	aishai();
	heshu();

    int k;
    for(scanf("%d",&k);k>0;k--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",shuju[b]-shuju[a-1]);
    }
    return 0;
}
