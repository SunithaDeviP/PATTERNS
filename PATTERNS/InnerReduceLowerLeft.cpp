#include<stdio.h>
int num;
void print(int n)
{
	for(int i=num;i>=n;i--)
	printf("%d",i);	
}

int main()
{

	scanf("%d",&num);
	int temp=2;
	for(int i=1;i<=num;i++)
	{
		print(temp);
		temp++;
		printf("\n");
		
	}
}
