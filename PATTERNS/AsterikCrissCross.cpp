#include<stdio.h>

void space (int sp)
{
	for(int i=1;i<=sp;i++)
	{
		printf(" ");
	}
}
int main()
{
	int col;
	printf("\nENTER THE COLUMN SIZE : ");
	scanf("%d",&col);
	int sp=col-2;
	int k=col;
	
	for(int i=1;i<=col;i++)
	{
		for(int j=1;j<=col;j++)
		{
		
		if(i==j)
		{
			space(sp);
			printf("*");
			
			
		}
		if(i==k)
		{
			printf("*");
			//space(sp);
			k--;
		}
	}
	printf("\n");
	}
	
	return 0;
}
