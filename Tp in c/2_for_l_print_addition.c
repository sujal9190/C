#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,sum=0,i;
    printf("Enter the number");
    scanf("%d",&a);

    for ( i = 1; i < a; i++)
    {
        sum=sum+i;
    }
    printf("SUM-->> %d",sum);
    
    return 0;
}
