#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,*p1,*p2;
    printf("Enter the values for sum\n");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;

    printf("Addition= %d",(*p1+*p2));
    return 0;
}
