#include<stdio.h>
int main()
{
	struct A
	{
		int num;
		char name[100];
         struct B
         {
            float per;
         }o1;
		
	}o;
	printf("Enter your roll no\t:-");
	scanf("%d",&o.num);
	printf("Enter the name\t:-");
	scanf("%s",&o.name);
	printf("Enter your percentage\t:-");
	scanf("%f",&o.o1.per);

	printf("\nRoll no \t:- %d",o.num);
	printf("\nYour name is \t:- %s",o.name);
	printf("\nYour percentage is :- %f",o.o1.per);	
}