#include<stdio.h>
int main()
{
    int A[100],i,d;
    clrscr();
    printf("Enter the number");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",A[i]);
    }
    for ( d = 0; d < 10; d++)
    {
        if (d%2!=0)
        {
            printf("%d",A[d]);
        }
        printf("%d",A[i]);
    }
    getch();
}
