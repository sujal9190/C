#include<stdio.h>
int main()
{
    int num,sum,rem,new;
    printf("Enter the number");
    scanf("%d",&num);
    new=num;
    
    while (num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if (new==sum)
    {
        printf("This is armstrong number");
    }
    else
    {
        printf("This is not armstrong number");
    }
    
}
