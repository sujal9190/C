#include<stdio.h>
int main()
{
    int i,b;
    printf("Enter the number");
    scanf("%d",&b);
    printf("\n table of %d",b);
    for (i=1;i<=10;i++)
    {
        printf("\n %d*%d=%d",b,i,b*i);
    }
}