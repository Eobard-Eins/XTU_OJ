#include<stdio.h>
#include<math.h>
#define N 1000001
int a[N]={1,1},b[N]={0},shuju[N]={0};
void aishai()
{
	int t=0;
    for(int i=0;i<1010;i++)//��ɸ  ��������b[N] 
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
	        if(k%b[i]==0)//�ҳ���С���������� 
	        {
	            int y=k/b[i],h=1;
	            for(int j=0;b[j]<=sqrt(y);j++)//�ж���һ�����Ƿ�Ϊ���� 
	            {
	                if(y%b[j]==0){
	                    h=0;
	                    break;
	                }
	            }
	            if(h){
	            	shuju[k]=shuju[k-1]+1;
	            	break;//�Ǻ��� 
	            }
	            else{
	                continue;
	            }
	        }
	    }
	    if(b[i]>=sqrt(k)) shuju[k]=shuju[k-1];//���� 
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
