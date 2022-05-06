#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=1;
    printf("Enter the number of the table");
    scanf("%d",&a);
    printf("Table of %d------------->>>>>>>>",a);
    for ( i = 1; i <= 10; i++)
    {
        printf("\n%d*%d=%d",a,i,a*i);
    }
    
    return 0;
}
