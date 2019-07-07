#include<stdio.h>

void space(int sp)
{
	for(int i=1;i<=sp;i++)
	{
		printf(" ");
	}
}

void print(int val)
{
	for(int i=1;i<=val;i++)
	{
		printf("*");
	}
}
int main()
{
	printf("ENTER THE COL SIZE : ");
	int col;
	scanf("%d",&col);
	int row = col;
	int sp=0;
	int val=col;
	int check=col/2+1;
	for(int i=1;i<=row;i++)
	{
		space(sp);
		print(val);
		if(i<check)
		{
			val=val-2;
			sp++;
		}
		else
		{
			val=val+2;
			sp--;
		}
		printf("\n");
	}
	
}
