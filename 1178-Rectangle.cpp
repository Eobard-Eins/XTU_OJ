#include<stdio.h>

int intersect(int a,int b,int c,int d,int a1,int b1,int c1,int d1)
{
	int n=1;
	int x_you=(a<c?c:a),x_zuo=(a<c?a:c);
	int y_shang=(b>d?b:d),y_xia=(b<d?b:d);
	int x1_you=(a1<c1?c1:a1),x1_zuo=(a1<c1?a1:c1);
	int y1_shang=(b1>d1?b1:d1),y1_xia=(b1<d1?b1:d1);
	if (x_you<=x1_zuo||x_zuo>=x1_you||y_shang<=y1_xia||y_xia>=y1_shang) n=0;
	return n;
}

int main()
{
	int k;
	for (scanf("%d",&k);k>0;k--)
	{
		int a,b,c,d;
		int a1,b1,c1,d1;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
		intersect(a,b,c,d,a1,b1,c1,d1)?printf("Yes\n"):printf("No\n");
	}
	return 0;
}
