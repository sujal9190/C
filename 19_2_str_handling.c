#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7;
    
    char name1[100],name2[100];
    printf("enter the name 1");
    gets(name1);
    printf("Enter the name 2");
    gets(name2);
    
    printf("Enter '1' for length\nEnter '2'for copy\nEnter '3' for connect\nEnter '4'for reverse\nEnter '5' for Compare\nEnter '6' for uppercase\nEnter '7' for lowercase");
    if (1==1)
    {
        printf("Length name1=%d\nname2=%d",&name1,name2);
    }
    else if (2==2)
    {
        printf("Length name1=%s\nname2=%s",&name1,name2);
    }
    
    printf("%d",strlen(name1));
}