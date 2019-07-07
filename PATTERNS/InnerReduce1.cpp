#include<stdio.h>

int num,row,col;
void Inverted_up(int num,int col)
{
	for(int j=1;j<=col;j++)
	{
		printf("%d",num);
	}
}

void Left_up(int n)
{
	for(int j=num;j>n;j--)
	{
		printf("%d",j);
	}
}

void Right_up(int n)
{
for(int j=n;j<=num;j++)
	printf("%d",j);
}

void LowerMiddle(int n,int col)
{
	for(int i=1;i<=col;i++)
	{
		printf("%d",n);
	}
}

void LowerLeft(int n)
{
	for(int i=num;i>=n;i--)
	printf("%d",i);	
}

void LowerRight(int temp)
{
	for(int j=temp;j<=num;j++)
	printf("%d",j);
}

int main()
{
	printf("ENTER THE NUMBER : ");
	scanf("%d",&num);
	int num1=num;
	int row=num;
	int col=num*2-2;
	for(int i=row;i>1;i--)
	{
		Left_up(i);
		Inverted_up(num1,col);
		Right_up(num1);
		num1--;
		
		col=col-2;
		printf("\n");		
	}
	
	int col1=1;
	int temp=2;
	for(int i=1;i<=num;i++)
	{
		LowerLeft(temp);
		
		LowerMiddle(i,col1);
		LowerRight(temp);
		col1=col1+2;
		temp++;
		printf("\n");
	}
}
