#include<stdio.h>
int main()
{
    int a,sum=0,i=1;
    printf("Enter the number");
    scanf("%d",&a);

    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("SUM:-->>%d",sum);
        
}