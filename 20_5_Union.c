#include<stdio.h>
int main()
{
	union A
	{
		int num;
		//n6char name[100];
		//float per;
	}o;
	printf("Enter your roll no\t:-");
	scanf("%d",&o.num);
	//printf("Enter the name\t:-");
	//scanf("%s",&o.name);
	//printf("Enter your percentage\t:-");
	//scanf("%f",&o.per);

	printf("\nRoll no \t:- %d",o.num);
	//printf("\nYour name is \t:- %s",o.name);
	//printf("\nYour percentage is :- %f",o.per);	
}