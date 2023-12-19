#include<stdio.h>

void check(int y)
{
	if(y%3==0 && y%5==0)
	{
		printf("it is divisible by and 3 and 5 both...");
	}
	else
	{
		printf("it is not divisible by 3 and 5..");
	}
	
}
void main()
{
	int a;
	printf("Enter any number to check whether it is divisible by 3 and 5 or not:-");
	scanf("%d",&a);
	check(a);
}
