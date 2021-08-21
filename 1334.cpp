#include<stdio.h>
__int64 gcd(__int64 x,__int64 y)
{
    __int64 z,a=x,b=y;
    if(x<y){
        int t=x;
        x=y;
        y=t;
    }
    while (y){
        z=x%y;
        x=y;
        y=z;
    }
    __int64 ou=a*(b/x);
    return ou;
}
__int64 f(__int64 x,__int64 y,__int64 z)
{
    __int64 ou=gcd(gcd(x,y),z);
    return ou;
}
int main()
{
    int k;
    for(scanf("%d",&k);k>0;k--)
    {
        int num[51]={0},n;
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&num[i]);
    	__int64 m=0,min=f(num[0],num[1],num[2]);
        for(int i=0;i<n;i++)
        {
        	for(int j=i+1;j<n;j++)
        	{
        		for(int t=j+1;t<n;t++)
        		{
        			m=f(num[i],num[j],num[t]);
        			m>=min?min=min:min=m;
        		}
        	}
        }
        printf("%I64u\n",min);
    }
    return 0;
}
