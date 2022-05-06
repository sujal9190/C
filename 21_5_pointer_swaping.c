#include<stdio.h>
int main(){
    int num1=50,num2=100;
    
    printf("Values before swaping \nnum1=%d\nnum2=%d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("Values after swaping \nnum1=%d\nnum2=%d\n",num1,num2);

    int *a,*b;
    a=&num1;
    b=&num2;

    printf("Values after swaping \nnum1=%d\nnum2=%d",num1,num2);



}