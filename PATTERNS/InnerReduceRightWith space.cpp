#include<stdio.h>
int num;
void print(int n)
{
	for(int j=n;j<=num;j++)
	printf("%d",j);
}

void space(int sp)
{
	for(int i=0;i<sp;i++)
	printf(" ");
}
int main()
{
//	int num;
	scanf("%d",&num);
	int sp=num-1;
	int num1=num;
	for(int i=num;i>=1;i--)
	{
		space(sp);
		print(num1);
		sp--;
		num1--;
		printf("\n");
	}
}
