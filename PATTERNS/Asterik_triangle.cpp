/*
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>

void space(int sp)
{
	for(int i=1;i<=sp;i++)
	{
		printf(" ");
	}
}


void print(int end)
{
	for(int i=1;i<=end;i++)
	{
		printf("* ");
	}
}

int main()
{
	int row;
	printf("\nENTER THE ROW SIZE : ");
	scanf("%d",&row);
	int sp = row-1;
	for(int i=1;i<=row;i++)
	{
		space(sp);
		print(i);
		sp--;
		printf("\n");
	}
	return 0;
}
