#include<stdio.h>
int main()
{
	int a,sum=0,n;
	printf("Enter the value ");
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		printf("%d+",a);
		sum=sum+a;
	}
	printf("Sum=%d",sum);
}
