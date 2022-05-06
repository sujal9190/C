#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct date
    {
        int dd,mm,yyyy;

    }d[3],*ptr;
    for (ptr = d; ptr < d+3; ptr++)
    {
        printf("Enter date :-");
        scanf("%d",&ptr->dd);
        printf("Enter month:-");
        scanf("%d",&ptr->mm);
        printf("Enter the year :-");
        scanf("%d",&ptr->yyyy);
        
    }
    ptr=d;
    while (ptr < d+3)
    {
        printf("%d/%d/%d\n",ptr->dd,ptr->mm,ptr->yyyy);
        ptr++;

    }
}
