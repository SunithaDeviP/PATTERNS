#include<stdio.h>
int num;
void print(int n)
{
	for(int j=num;j>n;j--)
	{
		printf("%d",j);
	}
}
int main()
{
	
	printf("ENTER THE ROW SIZE : ");
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	{
		print(i);
		printf("\n");
	}
}
