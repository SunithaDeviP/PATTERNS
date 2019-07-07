/*
    *
   **
  ***
 ****
*****

*/

#include<stdio.h>

void space(int count)
{
	for(int i=1;i<=count;i++)
	{
		printf(" ");
	}
}


void print(int count)
{
	for(int i=1;i<=count;i++)
	{
		printf("*");
	}
}


int main()
{
	int row;
	printf("\nENTER THE ROW SIZE : ");
	scanf("%d",&row);
	int sp=row-1;
	for(int i=1;i<=row;i++)
	{
		space(sp);
		print(i);
		sp--;
		printf("\n");
	}
	return 0;
}
