#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,count;
    char ch;
    do
    {    
    printf("Enter the number for check\n");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
        
    }
    
    if (count==2)
    {
        printf("This is prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
    printf("\nyou want to repeat the program?? (y/n)");
    scanf("%s",&ch);
    } while (ch=='y');
    return 0;
}
