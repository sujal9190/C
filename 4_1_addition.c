#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Enter Two numbers for addition \n");
    scanf("%d %d",&a,&b);
    printf("Answer of Addition = %d\n",(a+b));
    
    printf("Enter Two numbers for subtraction \n");
	scanf("%d %d",&c,&d);
	printf("Answer of subtraction = %d\n",(c-d));
    
    printf("Enter the numbers for multiplcation \n");
    scanf("%d %d",&e,&f);
    printf("Answer of multiplication = %d\n",(e*f));
    
    printf("Enter the numbers for Division \n");
    scanf("%d %d",&g,&h);
    printf("Answer of division = %d\n\n",(g/h));
    
    
    printf("Answer of Addition = %d\n",(a+b));
    printf("Answer of subtraction = %d\n",(a-b));
    printf("Answer of multiplacation = %d\n",(a*b));
    printf("Answer of division = %d\n",(a/b));
    
    return 0;
}
