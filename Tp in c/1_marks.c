#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks");
	scanf("%d",&marks);
	
	if(marks==100)
	{
		printf("\tGreat\nyou topped in the class");
	}
	else if(marks==99)
	{
		printf("\tWaw\nYou are top #2 in the class");
	}
	else if(marks==98)
	{
		printf("\tcongrats\nYou are top #3 in the class");
	}
}
