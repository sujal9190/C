#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the values of 'a' and 'b'\n\t:-");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Value of 'a' is :-%d\nValue of 'b' is :-%d",a,b);
	
	
	
}
