#include<stdio.h>
int aa();
int bb();
int area_of_circle();

int aa()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    printf("sum = %d",(a+b));
}
int bb()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    printf("sub = %d",(a-b));
}


int area_of_circle()
{
    float pi=3.14,r;
    printf("Enter the radious\n:-");
    scanf("%f",&r);
    printf("Area of Circle is =%f",(pi*r*r));
}





int main(int argc, char const *argv[])
{
    // printf("for add\n");
    // aa();
    // printf("\nfor sub\n");
    // bb();

    area_of_circle();
}