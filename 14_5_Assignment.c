#include<stdio.h>
int main(){
	int n,rem,rev=0;
	printf("Enter the num");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	
//        printf("%d",rem);
	}
	printf("%d",rev);
}
