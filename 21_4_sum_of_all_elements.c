#include<stdio.h>
int main()
{
    int num[100],sum=0,i,*ptr;

    for (i=0;i<5;i++)
    {
        printf("Enter the elements");
        scanf("%d",&num[i]);
    }
    i=0;
    ptr=&num[0];
    for (i=0;i<5;i++)
    {
        sum=sum+(*ptr++);
    }
    printf("sum of elements = %d",sum);
    
}
