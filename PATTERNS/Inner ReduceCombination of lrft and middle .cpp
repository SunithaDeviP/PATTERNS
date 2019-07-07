#include<stdio.h>
int num,row,col;
void LeftTriangle(int n)
{
	for(int j=num;j>n;j--)
	{
		printf("%d",j);
	}
}
void print(int num,int col)
{
	for(int j=1;j<=col;j++)
	{
		printf("%d",num);
	}
}

void space(int sp)
{
	for(int i=0;i<sp;i++)
	printf(" ");
}

int main()
{
		
	scanf("%d",&num);
	row=num-1;
	col=row*2-1;
	int sp=0;
	for(int i=1;i<=row;i++)
	{
		//space(sp);
		LeftTriangle(num);
		print(num,col);
		num--;	
		col=col-2;
		sp++;		
		printf("\n");
	}	
}
