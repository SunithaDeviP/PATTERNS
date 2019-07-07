#include<stdio.h>

void print(int num,int col)
{
	for(int j=1;j<col;j++)
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
	int num,row,col;	
	scanf("%d",&num);
	row=num;
	col=row*2-1;
	int sp=0;
	for(int i=1;i<=row;i++)
	{
		space(sp);
		print(num,col);
		num--;	
		col=col-2;
		sp++;		
		printf("\n");
	}	
}
