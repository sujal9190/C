#include<stdio.h>
#include<string.h>
int main()
{
    struct A
    {
        int no;
        char name[100];
        float per;
    }o;
    o.no=100;
    strcpy(o.name,"sujal");
    o.per=88.99;

    printf("no= %d",o.no);
	printf("\nname = %s",o.name);
    printf("\np = %f",o.per);
}