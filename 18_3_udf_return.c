#include<stdio.h>
int great(int x, int y, int z);
int main()
{
    int a,b,c;
    printf("Enter the values\n");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("Greater number = %d",great(a,b,c));
}
int great(int x, int y, int z){
    
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
