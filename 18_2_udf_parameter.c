#include<stdio.h>
int add(int a, int b);
int main()
{
    int x,y;
    printf("Enter the values of x and y\n");
    scanf("%d %d",&x,&y);
    add(x,y);
}
int add(int a, int b)
{
    printf("Add = %d",(a+b));
}