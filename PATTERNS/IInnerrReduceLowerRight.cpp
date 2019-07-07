#include<stdio.h>
int num;
void print(int temp)
{
	for(int j=temp;j<=num;j++)
	printf("%d",j);
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
