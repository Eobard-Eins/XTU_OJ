#include<stdio.h>
#include<string.h>
#define N 21
#define M 201
char str[N][M];
char shuru[M];
char same[M];
char sa(int i,int j)//当前列 共几行 
{
    j-=2;
    int m;
    for (m=0;m<=j;m++)
    {
        if (str[m][i] != str[m+1][i]){
        	return '#';
            break;//这一列无公共字符 
        }
    }
    if(m=j+1) return str[0][i];//返回公共字符 
}
int main()
{
    int k,num=1;
    for (scanf("%d",&k);k>0;k--)
    {
        int j,min=250;
        scanf("%d",&j);
        for (int f=0;f<=j-1;f++)
        {
            scanf("%s",shuru);
            strlen(shuru)<min?min=strlen(shuru):min=min;
            str[f][0]=shuru[0];
            for (int i=1;shuru[i-1]!='\0';i++) str [f][i]=shuru[i];// 将输入的字符存入二维数组 
        }
        int ge=0;    
        for (int q=0;q<min;q++)
        {
        	if (sa(q,j)=='#') break;
        	else
        	{
        		same[q]=sa(q,j);// 将公共字符存入一个数组same[M]中 
        	    ge++;	
        	}
            
        }
        printf("Case %d: ",num++);
        for (int g=0;g<ge;g++) printf("%c",same[g]);
        printf("\n");
        
    }
    return 0;
}
