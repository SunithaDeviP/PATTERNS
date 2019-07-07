#include<stdio.h>
/*
  *
 **
***
 **
  *

*/
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
	printf("*");
}
int main()
{
	int col;
	scanf("%d",&col);
	int row =col*2-1;
	int sp=col-1;
	int val=0;
	for(int i=1;i<=row;i++)
	{
		if(i<col)
		{
			val++;
			sp--;
		}
		else
		{
			val--;
			sp++;
		}
		space(sp);
		print(val);
		printf("\n");
	}
}
