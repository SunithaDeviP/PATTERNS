/*
*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>
int main()
{
	int row;
	printf("\nENTER THE ROW SIZE : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
