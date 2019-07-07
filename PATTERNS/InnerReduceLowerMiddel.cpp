#include<stdio.h>
void print(int n,int col)
{
	for(int i=1;i<=col;i++)
	{
		printf("%d",n);
	}
}

void space(int sp)
{
	for(int i=1;i<=sp;i++)
	{
		printf(" ");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	int sp = num-1;
	int col=1;
	for(int i=1;i<=num;i++)
	{
		
		space(sp);
		print(i,col);
		sp--;
		col=col+2;
		printf("\n");
	}
}
