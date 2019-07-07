#include<stdio.h>

/*

*
**
***
****
*****
****
***
**
*

*/

int main()
{
	int col;
	printf("Enter the column size : ");
	scanf("%d",&col);
	int val=0;
	int row= col*2-1;
	for(int i=1;i<=row;i++)
	{
		if(i<=col)
		{
			val++;
		}
		else
		{
			val--;
		}
		for(int i=1;i<=val;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
