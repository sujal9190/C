#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(c>0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
}