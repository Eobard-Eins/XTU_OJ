#include<stdio.h>
#include<math.h>
#define M 501
__int64 xuehao[M]={0},jifen[M]={0};
void ch(int x,int y)
{
    int t;
    t=xuehao[x];
    xuehao[x]=xuehao[y];
    xuehao[y]=t;
    
    t=jifen[x];
    jifen[x]=jifen[y];
    jifen[y]=t;
}
int suanfen(int benren,int b) //算分 
{
	float a=100.5+log(benren*1.0/b)*10;
	return a;
}
int main()
{
    int c,p;
    __int64 b;
    /*******************输入**************/ 
    while (scanf("%*d%I64d%d",&b,&c)!=EOF){ 
	    if(c<=12) c=32;
	    else if(12<c&&c<=24) c=16;
	    else if(24<c&&c<=48) c=8;
	    else if(48<c&&c<=96) c=4;
	    else if(96<c&&c<=192) c=2;
	    else if(192<c) c=1;
		p=0;
        for(int j=0;xuehao[j]!=0;j++)
        {
        	if(b==xuehao[j]) 
			{
				p=j;
				break;
			} 
			p=j+1;
        }
        xuehao[p]=b;
        jifen[p]+=c;
	}
	int num=0;
	for(int i=0;xuehao[i]!=0;i++) num++;
	int q=1;
	while (q)
	{
		q=0;
		for(int i=0;i<num;i++)
		{
			if(jifen[i]<jifen[i+1])
			{
				ch(i,i+1);
				q=1;
			}
		}
	}
	/**********算成分数**************/
	int max=jifen[0];
	for(int i=0;i<num;i++) jifen[i]=suanfen(jifen[i],max);
	/**************排序*************/ 
	for(int i=0;i<num;i++)
    {
        int k=i;
        while(jifen[i]==jifen[i+1]) i++;
        q=1;
        while(q)
        {
            q=0;
            for(int j=k;j<i;j++)
            {
                if(xuehao[j]>xuehao[j+1])
                {
                    ch(j,j+1);
                    q=1;
                }
            }
        }
    }
	/*******************输出*****************/ 
	for(int i=0;i<num;i++){
		printf("%I64d %I64d\n",xuehao[i],jifen[i]);
		
	}
    return 0;
}
