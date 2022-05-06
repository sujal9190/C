#include<stdio.h>
int main()
{
    struct Data
    {
        int num;
        char name[100];
        float per;
        
    }o[100];
    int i,nos;
    printf("Enter the numbers of total data you want to enter\n:-");
    scanf("%d",&nos);

    for (i=0;i<nos;i++)
    {
        printf("\nEnter the data of students %d\n:-",i+1);

        printf("Enter your roll no\t:-");
	    scanf("%d",&o[i].num);
	    printf("Enter the name\t:-");
	    scanf("%s",&o[i].name);
	    printf("Enter your percentage\t:-");
    	scanf("%f",&o[i].per);
    }

    for (i=0;i<nos;i++)
    {
        printf("\ndata of students %d\n:-",i+1);

        printf("\nRoll no \t:- %d",o[i].num);
	    printf("\nYour name is \t:- %s",o[i].name);
    	printf("\nYour percentage is :- %f",o[i].per);
    }
    
    
}