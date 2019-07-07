#include<stdio.h>

int print(int n)
{
	for(int j=1;j<n;j++)
	{
		printf("*");	
	}	
}

int main()
{
	printf("ENTER THE ROW SIZE : ");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		print(i);
		printf("\n");
	}
	return 0;
}
