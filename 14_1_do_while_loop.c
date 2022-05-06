#include<stdio.h>
int main(){
	int a,b;
	char ch;
	do{
		printf("\nEnter two values \n\t:-");
		scanf("%d %d",&a,&b);
		printf("Addition is =%d\n",(a+b));
		printf("do you want to continue(y/n)");
		scanf("%s",ch);
	}
	while(ch=='y');
}
