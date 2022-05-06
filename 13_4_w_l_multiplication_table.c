#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the number");
    scanf("%d",&a);
    printf("\n table of %d",a);
    while (i<=10)
    {
        printf("\n %d*%d=%d",a,i,a*i);
        i++;
    }

}
