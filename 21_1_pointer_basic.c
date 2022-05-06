#include<stdio.h>
int main()
{
    int a=11,*p1,**p2;
    p1=&a;
    p2=&p1;
    printf("a= %d",*p1);

    printf("\np2= %d",**p2);

}
