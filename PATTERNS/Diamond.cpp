/*

  *
 ***
*****
 ***
  *
*/

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
	int col,val=1,sp;
	printf("ENTER THE COLUMN SIZE : ");
	scanf("%d",&col);
	printf("\n\n");
	int row = col;
	sp=col-1;
	for(int i=1;i<=row;i++)
	{
		space(sp);
		print(val);
		
		if(i<col)
		{
			val=val+2;
			sp--;
		}
		else
		{
			sp++;
			val=val-2;
		}
		printf("\n");
	}
}
