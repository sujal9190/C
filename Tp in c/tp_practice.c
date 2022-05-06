#include<stdio.h>
void main()
{
    int x=7,y=-3,z;
    z=++x+y-- - ++y-x-- -x-- -x-- - ++y-x--;
    printf("%d",z);

}