#include<stdio.h>

int main()
{
	int jihui = 0;
	int a,b,c,A,B,C;
	int x,y,z,X,Y,Z; 
	scanf("%d",&jihui);
	
	while (jihui>0)
	{
		scanf("%d %d %d",&a,&b,&c);
		scanf("%d %d %d",&A,&B,&C);
		
		if(a>b)
		{
			x=a;
			z=b;
		}
		else
		{
			x=b;
			z=a;
		}
		
		if(c>x)
		{
			y=x;
			x=c;
		}
		else if(c<z)
		{
			y=z;
			z=c;
		}
		else
		{
			y=c;
		}
		
		
		if(A>B)
		{
			X=A;
			Z=B;
		}
		else
		{
			X=B;
			Z=A;
		}
		
		if(C>X)
		{
			Y=X;
			X=C;
		}
		else if(C<Z)
		{
			Y=Z;
			Z=C;
		}
		else
		{
			Y=C;
		}
		
		
		if (X*1.0/x==Y*1.0/y && X*1.0/x==Z*1.0/z && Y*1.0/y==Z*1.0/z)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		jihui--;
	}
	return 0;
}
