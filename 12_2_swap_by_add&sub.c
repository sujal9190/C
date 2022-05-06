#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of 'a' and 'b'\n:-");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of 'a' is :-%d\nValue of 'b' is :-%d",a,b);
}