#include<stdio.h>
int main()
{
	int age;

	printf("Enter your age");
	scanf("%d",&age);

	if(age>=18)
	{
		if(age>60)
		{
		printf("your age is grater then 60");
		}
		else
		{
			printf("blood can be donated");
		}
	}
	else
	{
		printf("your age is smaller then 18");
	}
}
